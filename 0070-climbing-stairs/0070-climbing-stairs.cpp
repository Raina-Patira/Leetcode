class Solution {
public:
    int climb(int i,vector<int> &dp){
        if(i==0 || i==1) return 1;
        if(dp[i]!=-1) return dp[i];
        dp[i]=climb(i-1,dp)+ climb(i-2,dp);
        return dp[i];
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return climb(n,dp);
    }
};