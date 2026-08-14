class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        sort(strs.begin(),strs.end());
        string s1=strs[0], s2=strs[strs.size()-1];
        int i =0;
        for(i=0;i<s1.size();i++) {
            if(s1[i]!=s2[i])
            break;
        }
        return s1.substr(0,i);
        
    }
};
