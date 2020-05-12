function collatz(num)
    sequence = [num]
    while num != 1
        if mod(num,2) == 0
            num = num/2
        else
            num = 3*num +1
        end
        append!(sequence, num)
    end
    return sequence
end


function problem014()
    max = 0
    solution = 0

    for i = 1:999999
        size_of_chain = length(collatz(i))
        if size_of_chain > max
            max = size_of_chain
            solution = i
        end
    end
    return solution
end
problem014()
