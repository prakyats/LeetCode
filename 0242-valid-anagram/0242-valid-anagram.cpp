    class Solution {
    public:
        bool isAnagram(string s, string t) {
            int h1[256]={0};
            if(s.size()!=t.size()) return 0;
            for(int i =0;i<s.size();i++)
            {
                h1[s[i]]++;
            }
            for(int j =0;j<t.size();j++)
            {
                h1[t[j]]--;
            }
            
            for(int k=0;k<256;k++){
                if(h1[k]==0)continue;
                else
                return 0;
            }
            return 1;
        }
    };