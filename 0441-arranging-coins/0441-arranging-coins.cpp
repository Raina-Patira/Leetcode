class Solution {
public:
    int arrangeCoins(int n) {
        int count=0;
        int i=1;
        while(n>0){
            if(n>=i){
                n-=i;
                i++;
                count++;
            }
            else break;
        }
        return count;
    }
};