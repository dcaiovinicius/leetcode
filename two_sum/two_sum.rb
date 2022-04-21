def two_sum(nums, target)
  hash = {}

  nums.each_with_index do |num, idx|
    result = target - num

    return [idx, hash[result]] if hash.include?(result)

    hash[nums[idx]] = idx
  end
end

# output
# [1, 0]
#
# 90 ms	212 MB
p two_sum([2,7,11,15], 9)
