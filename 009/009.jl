function problem009()
    solution = [0,0,0]
    for c in 1:1000
        for b in 1:1000
            for a in 1:1000
                if a^2 + b^2 == c^2 && a+b+c == 1000
                     solution = [a,b,c]
                end
            end
        end
    end
    return prod(solution)
end

problem009()
