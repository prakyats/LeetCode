class Solution {
public:
    int maxFreqSum(string s) {
        int max1=0,max2=0,n=s.size();
        int a[26]={0};
       for(char j : s){
        a[j-'a']++;
       }
       for(int i =0;i<26;i++){
        if(i==0||i==4||i==8||i==14||i==20){
            max1=max(max1,a[i]);
        }
        else 
            max2=max(max2,a[i]);
       }
       return max1+max2;
    }
};