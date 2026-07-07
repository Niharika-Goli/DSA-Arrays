class Solution {
public:
    long long sumAndMultiply(int n) {
        string n1="";
        int sum=0;
        string s=to_string(n);
        for (int i=0;i<s.size();i++){
            if (s[i]!='0'){
                n1+=s[i];
                sum=sum+s[i]-'0';
            }
        }
        if (n1.empty()) return 0;
        long long num=stoll(n1);
        return num*sum;
    }
};