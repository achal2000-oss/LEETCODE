class Solution {
public:
    int lengthOfLIS(vector<int>& nums) 
    {
        int l=nums.size();
        
        vector<int>dp(l+1,INT_MAX);
//         dp[0]=1;
//         for(int i=0;i<l;i++)
//         {
//             for(int j=i+1;j<l;j++)
//             {
//                 if(nums[i]<nums[j])
//                     dp[j]=max(dp[j],(dp[i]+1));
//             }
//             // for(int k=0;k<l;k++)
//             // cout<<dp[k]<<" ";
//             // cout<<endl;
//         }
        
//         int maxi=0;
//         for(int i=0;i<l;i++)
//         {
//             if(maxi<dp[i])
//                 maxi=dp[i];
//         }
        
        dp[0]=nums[0];
        for(int i=1;i<l;i++)
        {
            auto it=upper_bound(dp.begin(),dp.end(),nums[i]);
            //cout<<*it<<" ";
            if(it!=dp.begin() && dp[it-dp.begin()-1]==nums[i])
                continue;
            else
                dp[it-dp.begin()]=nums[i];
                
        }
        int maxi=0;
        for(int i=l-1;i>=0;i--)
        {
            if(dp[i]!=INT_MAX)
                return i+1;
        }
        return -1;
    }
};