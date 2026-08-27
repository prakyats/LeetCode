class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> a;
        int ran,i=0,j=1;
        if(n==1){
        a.push_back(0);
        return a;
        }
        if(n%2!=0){
            a.push_back(0);
            i++;
            }
        while(i<n){
         a.push_back(-j);
         a.push_back(j);
            j++;
          i+=2;
        }
    return a;
    }
};