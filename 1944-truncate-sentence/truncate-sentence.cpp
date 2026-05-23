class Solution {
public:
    string truncateSentence(string s, int k) {
        istringstream iss(s);
        vector<string>words;
        string res="";
        string word;
        while(iss >> word){
            words.push_back(word);
        }
        for(int i=0;i<k;i++){
            res+=words[i];
            res+=" ";
        }
        res.pop_back();
        return res;
    }
};