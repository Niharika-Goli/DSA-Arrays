class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>freq;
        int ans=-1;
        for (int i=0;i<nums1.size();i++){
            freq[nums1[i]]++;
        }
        for (int i=0;i<nums2.size();i++){
            if (freq[nums2[i]]>=1){
                ans=nums2[i];
                break;
            }
        }
        return ans;
    }
};