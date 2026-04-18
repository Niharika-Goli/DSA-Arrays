class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0,right=0,sum=0,minlen=INT_MAX;
        for (right;right<nums.size();right++){
            sum+=nums[right];
            while (sum>=target){
                minlen=min(minlen,right-left+1);
                sum-=nums[left];
                left++;
            }
            
        }
        if (minlen==INT_MAX){
            return 0;
        }
        return minlen;
    }
};