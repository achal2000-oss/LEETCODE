class Solution {
public:
    int mod=1000000007;
    int dp[50][50][51];
    long int helper(int m,int n,int ir,int ic,int move)
    {
        if(move<0)
            return 0;
        
        if(ir>=m || ir<0 || ic>=n || ic<0)
            return 1;
        if(dp[ir][ic][move]!=-1)
            return dp[ir][ic][move];
        //move--;
        return dp[ir][ic][move]=(helper(m,n,ir+1,ic,move-1)+helper(m,n,ir-1,ic,move-1)+ helper(m,n,ir,ic+1,move-1)+helper(m,n,ir,ic-1,move-1))%mod;
    }
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        
        long int count=0;
        memset(dp, -1, sizeof(dp));
//         for(int i=0;i<m;i++)
//         {
//             for(int j=0;j<n;j++)
//                 for(int k=0;k<maxMove;k++)
//                 cout<<dp[i][j][k]<<" ";
            
//             cout<<endl;
//         }
        long int ans=helper(m,n,startRow,startColumn,maxMove);
//         for(int i=0;i<m;i++)
//         {
//             for(int j=0;j<n;j++)
//                 cout<<dp[i][j]<<" ";
            
//             cout<<endl;
//         }
        return ans;
    }
};