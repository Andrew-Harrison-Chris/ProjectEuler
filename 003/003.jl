#=
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
=#

function isprime(num)
    #returns boolean value of whether number is prime or not.
    bool = true
    for i in 2:num-1
        if mod(num,i)==0
            bool=false
            break
        end
    end
    return bool
end

function slow_factors(num)
    #returns list of factors of a number. This is horribly slow...
    factors = []
    for i in 1:num
        if mod(num,i) == 0
            append!(factors, i)
        end
    end
    return factors
end


function factors(num)
    #factors come in pairs. Check up to sqrt, then divide num
    #by that new found factor to find other factor.

    factors = []
    for i in 1:round(sqrt(num))+1
        if mod(num,i) == 0
            append!(factors, i)
            append!(factors, num/i)
        end
    end
    return sort(factors)
end


@time factors(10000000) #runs in 0.000191 seconds (77 allocations: 3.250 KiB)
@time slow_factors(10000000) #runs in   0.058964 seconds (51 allocations: 1.938 KiB)
# 308x faster with that simple trick. Nice.

#or with julia magic...
using Primes
@time factor(10000000) #0.000010 seconds (7 allocations: 336 bytes)
#which gives us an additional 19.1x speed boost ^ :)


fac = factors(600851475143)

for i in 1:length(fac)
    if isprime(fac[i])
        global answer = fac[i]
    end
end

answer
