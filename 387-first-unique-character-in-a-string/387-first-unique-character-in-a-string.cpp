class Solution {
public:
    int firstUniqChar(string s) 
    {
        int a[26]={0};
        
        for(auto b:s)
            a[b-'a']++;
        
        for(int i=0;i<s.size();i++)
        {
            int c=a[s[i]-'a'];
            if(c==1)
                return i;
        }
        return -1;
    }
};