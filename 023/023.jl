function problem023()
    function factor(n)
        factors = []
        for i in 1:floor(sqrt(n))
            if n%i == 0
                append!(factors, [i, n/i])
            end
        end
        unique!(sort!(factors))
    end

    #A list of abundant numbers
    abundant_nums = []
    for i in 2:28123
        if sum(factor(i)[1:end-1]) > i
            append!(abundant_nums,i)
        end
    end

    abundant_nums

    #A list of all the possible sums of two abundant numbers. (under 28124)
    sum2abun = []
    for i in abundant_nums
        for j in abundant_nums
            append!(sum2abun, i+j)
        end
    end
    unique!(sum2abun)
    sum2abun = sum2abun[sum2abun .< 28124]



    #Filter the numbers not in sum2abun => Numbers that can't be represented as
    #sum of two abundant numbers.
    NonSumAbunNums = [1:1:28123]

    #Test to try and get this to work.
    x = [1,2,3,4,5]
    y = [2,4]
    findall(y_of_i -> 1 == length(findall(x_of_i -> x_of_i == y_of_i, y)), x)

    #Find all numbers not in the list of numbers that can be represented as the sum of abundant numbers.
    nonabuns = findall(y_of_i -> 0 == length(findall(x_of_i -> x_of_i == y_of_i, sum2abun)), collect(1:28123))
    sum(nonabuns)
end

problem023()
