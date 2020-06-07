using Test
function d(n)::Int64
    divisors = []
    for i in 1:sqrt(n)
        if n%i == 0
            append!(divisors, i)
            append!(divisors, n/i)
        end
    end
    sum(sort!(divisors)[1:end-1])
end

@test d(220) == 284
@test d(284) == 220


function problem021()
    #For speed, lets just calculate d(n) for everything once,
    #then we don't have to constantly have to recaculate in an
    #O(N^2)*factoring operation.
    #This reduces it to O(N)* factoring, THEN O(N^2) to check
    #which should be much quicker.

    d_of_n = d.(collect(1:1:10000))
    amicable = []

    for i in 1:9999
        for j in 1:9999
            if i==j
                continue
            elseif d_of_n[i] == j && d_of_n[j] == i
                append!(amicable,[i,j])
            end
        end
    end
    sum(unique!(amicable))
end

problem021()
