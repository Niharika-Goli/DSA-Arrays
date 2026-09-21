class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        n1=nums[0:n]
        n2=nums[n:]
        res=[]
        for i in range(n):
            res.append(n1[i])
            res.append(n2[i])
        return res