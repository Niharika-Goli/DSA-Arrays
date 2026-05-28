class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=*max_element(piles.begin(), piles.end());
        int minans=high;
        while (low<=high){
            int mid=low + (high - low) / 2;
            long long hour=0;
            for (int i=0;i<piles.size();i++){
                hour += (piles[i] + mid - 1) / mid;
            }
            if (hour<=h){
                minans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return minans;
    }
};