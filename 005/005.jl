#=
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
=#

#this is wayyy too slow. 

function slow_solution(num)
    #returns the smallest number that contains all the factors 1:num
    global answer = 1
    while true
        #println(answer)
         if all([mod(answer,i) == 0 ? true : false for i in 1:num]) == true
             break
         else
             global answer += 1
         end
    end
    return answer
end


using Primes
function faster_solution(num)
    #returns the smallest number that contains all the factors 1:num
    #with a factoring approach.
    answer = 1
    while true
        println(answer)
        facs = factor(answer)
        if all([facs[i] != 0 ? true : false for i in 1:num]) == true
            break
        end
        answer +=1
    end
    return answer
end


@time slow_solution(10) #0.071122 seconds (103.19 k allocations: 5.194 MiB)
@time faster_solution(10) #0.068594 seconds (80.23 k allocations: 3.859 MiB)
#barely faster. We need a different way that's not brute force.


#evenly divisible by 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20.
# means we can cut out 1,2,3,4,5,6,7,8,9,10. Since their multiples are all contianed.
#just check the last half? will that help?...
using Primes
function faster_solution_pt2(num=20)
    #returns the smallest number that contains all the factors 1:num
    #with a factoring approach.
    answer = 1
    while true
        println(answer)
        facs = factor(answer)
        if all([facs[i] != 0 ? true : false for i in 10:num]) == true
            break
        end

        answer +=1
    end
    println(answer)
end

faster_solution_pt2()


#that didn't work.

#using julia lcm is fast, but there's no multiple function.
function multiple_lcm(arr)
    num = 1
    for i in 1:length(arr)
        if i==1
            num = lcm(arr[i], arr[i+1])
        elseif i==2
            nothing
        else
            num = lcm(num, arr[i])
        end
    end
    return num
end
#whoah that works really well.
answer = multiple_lcm(range(1,20))
