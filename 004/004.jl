function problem004()
    answer = 0
    for i in 100:999
        for j in 100:999
            N = i*j
            if string(N) == reverse(string(N)) && N > answer
                answer = N
            end
        end
    end
    return answer
end

problem004()
