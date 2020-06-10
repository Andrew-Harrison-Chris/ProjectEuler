function problem001()
    list = []
    for i in 1:999
        if mod(i,3) == 0 || mod(i,5) == 0
            append!(list, i)
        end
    end

    return sum(list)
end

#problem001()
