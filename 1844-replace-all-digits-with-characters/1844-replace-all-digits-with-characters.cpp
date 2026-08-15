class Solution {
public:
    string replaceDigits(string s) {
        for(int i =0;i<s.size();i++){
            char c=s[i];
            if(i%2!=0){
                s[i]=s[i-1]+(c-'0');
            }
        }
        return s;
    }
};