# leetcode
# Runtime 137 ms	211 MB Memory
def is_palindrome(number)
    
    if (number < 0 || (number % 10 == 0 && number != 0))
        return false 
    end
    
    reverse = 0
    temp = number

    while(number != 0) do
        reverse = reverse * 10 + number % 10
        number /= 10
    end

    return (temp == reverse || temp == reverse/10)
end

#
# real    0m0,161s
# user    0m0,137s
# sys     0m0,070s
puts is_palindrome(12345654321) 