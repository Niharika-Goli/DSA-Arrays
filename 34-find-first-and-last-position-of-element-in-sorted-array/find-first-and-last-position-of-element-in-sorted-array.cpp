class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int>res;
        int first=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        res.push_back(first);
        if (first==nums.size() || nums[first]!=target){
            return {-1,-1};
        }
        int last=upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
        res.push_back(last);
        return res;
    }
};