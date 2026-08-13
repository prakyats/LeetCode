class Solution {
public:
    string removeDuplicateLetters(string s) {
        int freq[26]={0};
        bool used[26]={false};
        for(auto c:s){
            freq[c-'a']++;
        }
        string ans="";

        for(auto c : s)
        {
            freq[c-'a']--;
            if(used[c-'a'])
            continue;
            else
            {
                while(!ans.empty() && ans.back()> c && freq[ans.back()-'a'] ){
                   used[ans.back()-'a']=false;
                   ans.pop_back();
                }
                ans.push_back(c);
                used[c-'a']=true;
            }
        }
        return ans;
    }
};