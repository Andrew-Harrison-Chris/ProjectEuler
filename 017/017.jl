function singles(n)
    lib = ["zero", "one", "two", "three", "four", "five", "six",
                 "seven", "eight", "nine"]
    if n < 0 | n > 9
        error("called single on not a single")
    else
        return lib[n+1]
    end
end


function doubles(n)
    digit2 = ["ten", "eleven", "twelve", "thirteen", "fourteen",
            "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"]
    base2 = ["twenty", "thirty", "forty", "fifty", "sixty",
            "seventy", "eighty", "ninety"]

    if n < 20 && n > 9
        return digit2[n-9]
    elseif  n < 100 && n >= 20

        first_digit = trunc(Int, floor(n/10))
        second_digit = n%10
        if second_digit != 0
            return base2[first_digit-1]*singles(second_digit)
        else
            return return base2[first_digit-1]
        end
    end
end

function triples(n)
    base3 = "hundred"

    first_digit = trunc(Int, floor(n/100))
    second_digit = trunc(Int, floor(n/10)%10)
    third_digit = n%10

    if second_digit == 0 && third_digit==0
        return singles(first_digit)*base3
    elseif third_digit == 0
        return singles(first_digit)*base3*"and"*doubles(second_digit*10)
    elseif second_digit == 0
        return singles(first_digit)*base3*"and"*singles(third_digit)
    else
        return singles(first_digit)*base3*"and"*doubles(second_digit*10 + third_digit)
    end
end


function convert_to_word(n)
    if n >= 0 && n < 10
        return singles(n)
    elseif n >= 10 && n < 100
        return doubles(n)
    elseif n >= 100 && n < 1000
        return triples(n)
    elseif n == 1000
        return "onethousand"
    end
end

function problem017()
    sum = 0
    for i in 1:1000
        sum += length(convert_to_word(i))
    end
    return sum
end
problem017()
