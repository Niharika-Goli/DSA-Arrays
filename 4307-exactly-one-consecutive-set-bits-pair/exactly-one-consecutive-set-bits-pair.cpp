class Solution {
public:
    bool consecutiveSetBits(int n) {
        bitset<64>b(n);
        int count=0;
        for (int i=1;i<64;i++){
            if (b[i]==1 && b[i-1]==1){
                count+=1;
            }
        }
        if (count==1){
            return true;
        }
        return false;

    }
};