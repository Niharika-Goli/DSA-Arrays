class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zc=0,idx=0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]!=0){
                nums[idx]=nums[i];
                idx+=1;
            }
            else 
                zc+=1;
        }
        for (int i=idx;i<idx+zc;i++){
            nums[i]=0;
        }
    }
};