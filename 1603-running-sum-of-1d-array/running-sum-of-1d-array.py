class Solution:
    def runningSum(self, nums: list[int]) -> list[int]:
        res=[]
        sum=0
        for num in nums:
            sum+=num
            res.append(sum)
        return res