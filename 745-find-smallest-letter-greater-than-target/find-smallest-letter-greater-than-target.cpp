class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        target = int(target);

int l = 0, r = letters.size() - 1;
char ans = letters[0];

while (l <= r) {
    int mid = (l + r) / 2;

    if (letters[mid] > target) {
        ans = letters[mid];
        r = mid - 1;
    }
    else {
        l = mid + 1;
    }
}

return ans;
    }
};