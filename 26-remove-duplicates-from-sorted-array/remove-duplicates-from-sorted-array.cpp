class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int curr=nums[0],idx=0;
        nums[idx]=nums[0];
        for (int i=1;i<nums.size();i++){
            if (curr!=nums[i]){
                curr=nums[i];
                idx+=1;
                nums[idx]=curr;
            }
        }
        return idx+1;
        
    }
};