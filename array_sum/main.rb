numbers = [1, 2, 3, 4, 5]

def array_sum(array)
    sum = 0

    array.each { |num| sum = sum + num  }
    return sum
end

p array_sum(numbers);