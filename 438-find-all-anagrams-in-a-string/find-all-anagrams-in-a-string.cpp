class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> a(26,0),b(26,0);
        vector <int>res;
        if (p.size() > s.size()) return {};
        for (char ch:p){
            a[ch-'a']++;
        }
        int k=p.size();
        for (int i=0;i<k;i++){
            b[s[i]-'a']++;
        }
        if (a==b) res.push_back(0);
        for (int i=k;i<s.size();i++){
            b[s[i]-'a']++;
            b[s[i-k]-'a']--;
            if (a==b) res.push_back(i-k+1);
        }
        return res;
    }
};