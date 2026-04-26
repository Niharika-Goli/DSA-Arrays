class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;
        for (int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        vector <int>occ;
        for (auto x:freq){
            occ.push_back(x.second);
        }
        sort(occ.begin(),occ.end());
        for (int i=1;i<occ.size();i++){
            if (occ[i-1]==occ[i]){
                return false;
            }
        }
        return true;
    }
};