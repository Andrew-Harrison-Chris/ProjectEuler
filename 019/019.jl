function problem019()::Int64

    months = 31*ones(12)
    months[9] = 30 #september
    months[4] = 30 #april
    months[6] = 30 #june
    months[11] = 30 #november
    months[2] = 28 #february

    totaldays = 1
    sundays = 0

    for year = 1901:2000
        #leap year
        dayofyear = 0

        #Leap Year
        if (year%4 == 0) && (!(year%100==0) || year%400==0)
            months[2] += 1
        end

        for month in months
            #We start on Monday, so N % 7 == 6 is sunday.
            if ((totaldays+dayofyear) % 7 == 6)
                    sundays += 1
            end
            dayofyear += month
        end

        #keep track of total days past over all the years
        totaldays += sum(months)

        #reset to not leap year
        if months[2] == 29
            months[2] = 28
        end
    end

    return sundays
end

problem019()
