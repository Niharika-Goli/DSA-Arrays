class Solution {
public:
    int countSubstrings(string s) {
        
        int n=s.length();

        int count=0;
        for(int i=0;i<n;i++){
            int left=i-1;
            int right=i+1;

            count++;

            while(left>=0 && right<n && s[left]==s[right]){
                left--;
                right++;
                count++;
            }

            left=i;
            right=i+1;

            while(left>=0 && right<n && s[left]==s[right]){
                left--;
                right++;
                count++;
            }
        }

        return count;

    }
};