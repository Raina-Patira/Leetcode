class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int> v(n,0);
        if(k==0){
            return v;
        }
        int sum=0;
        if(k>0){
            for(int i=1;i<=k;i++){
                sum+=code[i];
            }
            v[0]=sum;
            for(int i=1;i<n;i++){
                sum-=code[i];
                sum+=code[(i+k)%n];
                v[i]=sum;
            }
        }
        else{
            int h= k*(-1);
            for(int i=n-2;i>=(n-h-1);i--){
               sum+=code[i]; 
            }
            v[n-1]=sum;
            for(int i=n-2;i>=0;i--){
                sum-=code[i];
                sum+=code[((i-h)+n)%n];
                v[i]=sum;
            }
        }
        return v;
    }
};