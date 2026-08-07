class Solution {
  public:
    bool isIsomorphic(string &s1, string &s2) {
        // code here
        unordered_map<char,char> fwd;
        unordered_map<char,char> bwd;
        for(int i =0;i<s1.size();i++){
            if(fwd.find(s1[i])!=fwd.end() || bwd.find(s2[i])!=bwd.end()){
                if(fwd[s1[i]]!=s2[i] && bwd[s2[i]]!=s1[i])
                return false;
            }
            else if (fwd.find(s1[i])==fwd.end() && bwd.find(s2[i])==bwd.end()){
                fwd[s1[i]]=s2[i];
                bwd[s2[i]]=s1[i];
            }
            else
            return false;
        }
        return true;
    }
};