class Solution {
public:
    static bool cmp(vector<int>&a,vector<int>&b)
    {
        if(a[1]>b[1])
            return true;
        return false;
    }
    int maximumUnits(vector<vector<int>>& box, int Size)
    {
          
        sort(box.begin(),box.end(),cmp);
        //priority_queue<vector<int>,vector<vector<int>>,cmp1>pq
        int sum=0;
        for(int i=0;i<box.size();i++)
        {
            if(Size>=box[i][0])
            {
                sum+=(box[i][1]*box[i][0]);
                Size-=box[i][0];
            }
            else
            {
               sum+=(Size*box[i][1]); 
                break;
            }
        }
        
        return sum;
        //priority_queue<int,vector<int>,help>pq;
    }
};