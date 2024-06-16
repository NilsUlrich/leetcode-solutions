class Solution(object):
    def twoSum(self, nums, target):
        num_to_index = {}

    # Loop through each number in the array
    for index, num in enumerate(nums):
        # Calculate the difference needed to reach the target
        complement = target - num

        # Check if the complement is already in the dictionary
        if complement in num_to_index:
            # If found, return the indices of the two numbers
            return [num_to_index[complement], index]

        # If not found, store the current number and its index in the dictionary
        num_to_index[num] = index
