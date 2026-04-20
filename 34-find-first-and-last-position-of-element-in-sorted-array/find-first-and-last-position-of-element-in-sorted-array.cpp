class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st=-1,en=-1;
        for (int i=0;i<nums.size();i++){
            if (nums[i]==target){
                st=i;
                break;
            }
        }
        for (int i=nums.size()-1;i>=0;i--){
            if (nums[i]==target){
                en=i;
                break;
            }
        }
        return {st,en};
    }
};