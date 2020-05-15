function problem016()
    sum = 0
    for i in string(BigInt(2)^1000)
        sum = sum + parse(Int64,i)
    end
    return sum
end

problem016()
