class Solution {
public:
    void dfs(vector<vector<int>>& grid,vector<vector<int>>&vis,int i,int j,int &count)
    {
        
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size())
            return ;
         
        if(vis[i][j]==1 )
            return ;
        if(grid[i][j]==1)
        {
        count++;
       // cout<<i<<" "<<j<<" "<<count<<endl;
        vis[i][j]=1;
        dfs(grid,vis,i,j-1,count);
        dfs(grid,vis,i,j+1,count);
        dfs(grid,vis,i-1,j,count);
        dfs(grid,vis,i+1,j,count);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid)
    {
        int l=grid.size(),m=grid[0].size();
        
        vector<vector<int>>vis(l,vector<int>(m,0));
        int maxi=0;
        for(int i=0;i<l;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==0 && grid[i][j]==1)
                {
                    //cout<<1;
                    int count=0;
                    dfs(grid,vis,i,j,count);
                    maxi=max(maxi,count);
                    
                   // cout<<maxi<<" "<<count<<endl;
                }
            }
        }
        
        return maxi;
    }
};