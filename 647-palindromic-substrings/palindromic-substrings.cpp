class Solution {
public:
    int countSubstrings(string s) {
        string sub="";
        int i=0,count=0;
        for (int j=0;j<s.size();j++){
            for (int i=j;i<s.size();i++){
            sub+=s[i];
            string temp=sub;
            reverse(temp.begin(),temp.end());
            if (sub==temp){
                count+=1;
            }
            }
            sub="";
        }
        return count;
    }
};