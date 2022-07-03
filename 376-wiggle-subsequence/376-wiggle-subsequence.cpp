class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) 
    {
        bool flag=true;
        vector<int>res;
        for(int i=1;i<nums.size();i++)
        {
            res.push_back(nums[i]-nums[i-1]);
        }
        int count=0,count1=0;
        for(int i=0;i<res.size();i++)
        {
            if(res[i]>0 && flag)
            {
                flag=!flag;
                count++;
            }
            else if(res[i]<0 && !flag)
            {
                flag=!flag;
                count++;
            }
        }
        flag=true;
        for(int i=0;i<res.size();i++)
        {
            if(res[i]<0 && flag)
            {
                flag=!flag;
                count1++;
            }
            else if(res[i]>0 && !flag)
            {
                flag=!flag;
                count1++;
            }
        }
        
        return max(count,count1)+1;
    }
};