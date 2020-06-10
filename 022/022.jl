using DelimitedFiles, Test

function problem022()
    files = readdlm("/Users/chris/Desktop/ProjectEuler/022/names.txt", ',', String, '\n')
    sort!(files, dims=2)

    @test files[938] == "COLIN"

    solution = 0
    for i in 1:length(files)
        name_sum = 0
        for j in 1:length(files[i])
            name_sum += parse(Int, files[i][j], base=62)-9
        end
        solution += name_sum*i
    end
    
    return solution
end

problem022()
