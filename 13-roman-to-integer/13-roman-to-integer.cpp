class Solution {
public:
    
    int fun(char c)
    {
        if(c=='I')
            return 1;
        else if(c=='V')
            return 5;
       
        else if(c=='X')
            return 10;
        else if(c=='L')
            return 50;
        else if(c=='C')
            return 100;
        else if(c=='D')
            return 500;
        else if(c=='M')
            return 1000;
        
        return 0;
    }
    int romanToInt(string s)
    {
        int l=s.size();
        int sum=0;
        for(int i=0;i<l;i++)
        {
            int first=fun(s[i]);
            if(i<l-1)
            {
                
                int second=fun(s[i+1]);
                
                if(first<second)
                {
                    i++;
                    sum+=(second-first);
                }
                
                else
                    sum+=first;
                
                
            }
            else
            {
                sum+=first;
            }
        }
        return sum;
    }
};