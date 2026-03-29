class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0,right=height.size()-1;
        int maxhei=INT_MIN;
        while (left<right){
            if (height[left]<height[right]){
                maxhei=max(maxhei,((right-left)*height[left]));
                left++;
            }
            else if (height[left]>=height[right]){
                maxhei=max(maxhei,((right-left)*height[right]));
                right--;
            }
        }
        return maxhei;
    }
};