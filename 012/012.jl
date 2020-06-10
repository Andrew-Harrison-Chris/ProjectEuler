function factors(num)
    #factors come in pairs. Check up to sqrt, then divide num
    #by that new found factor to find other factor.

    factors = []
    for i in 1:floor(sqrt(num))
        if mod(num,i) == 0
            append!(factors, i)
            if i != num/i
                append!(factors, num/i)
            end
        end
    end
    return factors
end

function problem012()
    triangle_num = 1
    i = 1
    while true
        num_factors = length(factors(triangle_num))
        if num_factors >= 500
            break
        end
        i = i+1
        triangle_num = triangle_num + i
    end
    return triangle_num
end
problem012()
