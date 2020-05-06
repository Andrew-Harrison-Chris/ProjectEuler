# A script to automatically run existing julia files in which I write to solve more problems.
# This will automatically create the solutions.md file from a given file: Example for problem 8:
# Looks for problem008() defined in *current_directory*/008/008.jl

using Glob, Primes

function get_problem_directories()
    #globs current file's directory for three letter folders.
    files = glob("*", (@__FILE__)[1:end-13])
    delete = []
    for i in 1:length(files)
        length(files[i]) != length((@__FILE__)[1:end-13])+4 ? append!(delete, i) : nothing
    end
    for i in sort(delete, rev=true)
        deleteat!(files, i)
    end
    return files
end


function run_problems(dir_list)
    #runs problems. Example, taking path from 008 we append 008.jl and include and run
    #the function problem008() defined in 008.jl

    dir_list = get_problem_directories()
    answers = []
    for i in 1:length(dir_list)
        dir_list[i] *= "/" * lpad(i,3,"0") * ".jl"
        include(dir_list[i])
        fn = "problem" * lpad(i,3,"0")
        append!(answers, getfield(Main, Symbol(fn))())
    end
    answers
end

function write_to_file(solutions)
    #delete existing file first
    rm((@__FILE__)[1:end-13] * "/solutions.md")
    for i in 1:length(solutions)
        open((@__FILE__)[1:end-13] * "/solutions.md","a") do io
            i == 1 ? println(io, "# Solutions to Project Euler written in Julia \n## By Chris DeGrendele") : nothing
            println(io,lpad(i,3,"0")* " = ",solutions[i])
        end
    end
end

write_to_file(run_problems(get_problem_directories()))
