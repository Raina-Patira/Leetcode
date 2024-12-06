class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int sum=0, ans=0;
        sort(banned.begin(),banned.end());
        int j=0;
        for(int i=1;i<=n;i++){
            if (j<banned.size() && i==banned[j]) {
                j++;
                while(j<banned.size() && banned[j]==banned[j-1]) j++;
            }
            else if (sum+i<=maxSum) {
                ans++;
                cout<<i<<" ";
                sum+=i;
            }
            if(i>maxSum) break;
        }
        return ans;
    }
};