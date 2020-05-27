function problem020()
    sum = 0
    for i in string(factorial(big(100)))
        sum += parse(Int64, i)
    end
    return sum
end

problem020()
