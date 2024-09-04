class Solution {
public:
    int getLucky(string s, int k) {
        vector<int> vi;
        int sum=0;
        for(int i=0;i<s.length();i++){
            int c=s[i]-'a'+1;
            vi.push_back(c);
        }    
        for(int i=0;i<vi.size();i++){
            sum+=(vi[i]%10 + vi[i]/10);
        }
        if (k==1) return sum;
        int res;
        while (k-1 !=0 && sum>9){
            res=0;
            while(sum!=0){
                res+=sum%10;
                sum/=10;
            }
            sum=res;
            k--;
        }
        return res;
    }
};