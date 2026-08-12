class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        for(auto it:s){
            if(isalnum(it)){
                s1.push_back(tolower(it));
            }
        }
        string ori=s1;
        reverse(s1.begin(), s1.end());
        if(s1==ori){
            return true;
        }
        return false;
    }
};