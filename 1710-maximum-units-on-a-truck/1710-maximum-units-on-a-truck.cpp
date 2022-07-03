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
          
        // sort(box.begin(),box.end(),cmp);
        // //priority_queue<vector<int>,vector<vector<int>>,cmp1>pq
        // int sum=0;
        // for(int i=0;i<box.size();i++)
        // {
        //     if(Size>=box[i][0])
        //     {
        //         sum+=(box[i][1]*box[i][0]);
        //         Size-=box[i][0];
        //     }
        //     else
        //     {
        //        sum+=(Size*box[i][1]); 
        //         break;
        //     }
        // }
        int maxi=INT_MIN,sum=0;
        int bucket[1005]={0};
        for(auto &a:box)
        {
            maxi=max(a[1],maxi);
            bucket[a[1]]+=a[0];
        }
        for(int i=maxi;i>=0;i--)
        {
            if(bucket[i]==0)
                continue;
            int n=bucket[i];
            int c=min(n,Size);
            sum+=(c*i);
            Size-=c;
            if(!Size)
                break;
        }
        return sum;
        //priority_queue<int,vector<int>,help>pq;
    }
};