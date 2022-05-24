# leetcode
# Runtime 137 ms 	Memory 210.9 MB
def is_valid(string)
    return false if string.empty? 

    characters = {'(' => ')', '[' => ']', '{' => '}'}
    
    stack = []
    string.each_char do |char|
        if characters.include?(char)
            stack << char
        elsif characters[stack[-1]] != char
             return false
        else
            stack.pop
        end
    end
    
    return stack.empty?
end

# real	0m0,175s
# user	0m0,147s
# sys	  0m0,074s
puts is_valid("{){)")
