class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int totalsum=0;
        int digisum=0;
        for (int num : nums) {
        totalsum += num;

        while (num > 0) {
            digisum += num % 10;
            num /= 10;
        }
    }
        return abs(totalsum-digisum);
    }
};