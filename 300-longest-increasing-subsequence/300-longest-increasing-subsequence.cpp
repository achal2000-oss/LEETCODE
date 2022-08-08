class Solution {
public:
    int lengthOfLIS(vector<int>& nums) 
    {
        int l=nums.size();
        
        vector<int>dp(l,1);
        dp[0]=1;
        for(int i=0;i<l;i++)
        {
            for(int j=i+1;j<l;j++)
            {
                if(nums[i]<nums[j])
                    dp[j]=max(dp[j],(dp[i]+1));
            }
            // for(int k=0;k<l;k++)
            // cout<<dp[k]<<" ";
            // cout<<endl;
        }
        
        int maxi=0;
        for(int i=0;i<l;i++)
        {
            if(maxi<dp[i])
                maxi=dp[i];
        }
        
        return maxi;
    }
};