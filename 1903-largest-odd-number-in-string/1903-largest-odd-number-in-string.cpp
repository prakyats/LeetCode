class Solution {
public:
    string largestOddNumber(string num) {
        string s;
        // if(stoi(num)%2 !=0)
        // return num;
        for(int i = num.size()-1;i>=0;i--){
            if((num[i]-'0')%2 !=0)
            {
            s=num.substr(0,i+1);
            break;
            }
        }
        return s;
    }
};