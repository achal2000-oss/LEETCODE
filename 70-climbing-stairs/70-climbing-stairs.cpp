class Solution {
public:
    int func(int s,vector<int>&dp)
    {
        if(s<=1)
            return 1;
        if(dp[s]!=-1)
            return dp[s];

        return dp[s]=func(s-1,dp)+func(s-2,dp);
    }
    int climbStairs(int nStairs) {
       vector<int>dp(nStairs+1,-1);
    return func(nStairs,dp); 
    }
};