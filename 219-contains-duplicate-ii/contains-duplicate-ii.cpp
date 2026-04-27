class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for (int left = 0; left < nums.size(); left++) {

    for (int right = left + 1; right < nums.size() && right - left <= k; right++) {

        if (nums[left] == nums[right]) {
            return true;
        }

    }
}

return false;
    }
};