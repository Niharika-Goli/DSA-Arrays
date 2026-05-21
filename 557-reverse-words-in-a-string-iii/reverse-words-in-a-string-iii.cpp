class Solution {
public:
    string reverseWords(string s) {
        istringstream iss(s);
        vector <string>words;
        string word;
        while (iss>>word){
            reverse(word.begin(),word.end());
            words.push_back(word);
        }
        string res="";
        for (string revword:words){
            res+=revword+" ";
        }
        res.pop_back();
        return res;

    }
};