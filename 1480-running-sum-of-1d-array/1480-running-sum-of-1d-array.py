class Solution(object):
    def runningSum(self, nums):
        sum = 0
        output = []
        for i in range (len(nums)):
            sum += nums[i]
            output.append(sum)
        return (output)     

        
s = Solution()
input = [1,2,3,4]
s.runningSum(input)            