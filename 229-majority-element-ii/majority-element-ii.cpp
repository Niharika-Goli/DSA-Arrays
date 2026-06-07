class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        int n=nums.size();
        vector<int>res;
        for (int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for (auto x:freq){
            if (x.second>(n/3)){
                res.push_back(x.first);
            }
        }
        return res;
    }
};