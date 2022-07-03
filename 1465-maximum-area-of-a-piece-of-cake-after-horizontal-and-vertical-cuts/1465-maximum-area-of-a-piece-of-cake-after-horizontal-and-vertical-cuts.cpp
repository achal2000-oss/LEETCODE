class Solution {
public:
    int maxArea(int h1, int w1, vector<int>& hc, vector<int>& vc)
    {
        long long int m=1e9+7,h=0,v=0;
        sort(hc.begin(),hc.end());
        sort(vc.begin(),vc.end());
        int i;
        for( i=0;i<hc.size();i++)
        {
            if(i==0 )
            {
                if(i==0)
                    h=hc[i];
                // else
                //     h=max(h,(h1-hc[i])*1ll);
            }
            
            else
                h=max(h,(hc[i]-hc[i-1])*1ll);
        }
        h=max(h,(h1-hc[i-1])*1ll);
        //int i;
       // cout<<h<<" "<<v;
        for(i=0;i<vc.size();i++)
        {
            if(i==0 ){
            if(i==0)
                v=vc[i];
            // else
            //     v=max(v,(w1-vc[i])*1ll);
            }
            
            else
                v=max(v,(vc[i]-vc[i-1])*1ll);
        }
        v=max(v,(w1-vc[i-1])*1ll);
        //cout<<h<<" "<<v;
        //return 0;
       return (h%m *1ll * v%m)%m;
    }
};