class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int high=accumulate(weights.begin(), weights.end(), 0);;
        int low=*max_element(weights.begin(),weights.end()),ans=0;
        while (low<=high){
            int mid=low+(high-low)/2;
            int w=0,count=1;
            for(int i=0;i<weights.size();i++){
                if (w+weights[i]>mid){
                    count+=1;
                    w=weights[i];
                }
                else{
                    w+=weights[i];
                }
            }
            if (count<=days){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};