class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words)
    {
        string c[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
            
        int count=0;
       int l=words.size();
        map<string,int>mp;
        for(int i=0;i<l;i++)
        {
            string temp;
            string f=words[i];
            for(int j=0;j<f.size();j++)
            {
                temp+=c[f[j]-'a'];
            }
            
            if(mp[temp]==0)
            {
                count++;
                mp[temp]=1;
            }
        }
        return count;
    }
};