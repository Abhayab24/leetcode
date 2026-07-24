class Solution {
public:
    int waysmemo(int n,vector<int>& dp){
        if(n<=1) return 1;
        if(dp[n]!=-1) return dp[n];
        dp[n]=waysmemo(n-1,dp)+waysmemo(n-2,dp);
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return waysmemo(n,dp);
               
    }
};