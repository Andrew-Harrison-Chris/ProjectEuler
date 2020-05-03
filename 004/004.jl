#=
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
=#

global answer = 0
for i in 100:999
    for j in 100:999
        N = i*j
        if string(N) == reverse(string(N)) && N > answer
            global answer = N
        end
    end
end

answer
