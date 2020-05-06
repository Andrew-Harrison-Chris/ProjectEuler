function fibonacci(n)
    #returns a fibonacci sequence up to the number n,
    f1, fn_1 = 0,0
    f2, fn = 1,1

    if n == 1
        fiblist = [f1]
    else n==2
        fiblist = [f1,f2]
    end

    if n>2
        while n >= fn+fn_1
            append!(fiblist, fn+fn_1)
            temp = fn
            fn = fn+fn_1
            fn_1 = temp
        end
    end
    return fiblist
end

function problem002()
    fiblist = fibonacci(3999999)
    evenfibs = []
    for i in 1:length(fiblist)
        if iseven(fiblist[i])
            append!(evenfibs, fiblist[i])
        end
    end

    return sum(evenfibs)
end

problem002()
