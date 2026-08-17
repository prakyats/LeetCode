class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int freq[101]={0};
        for(auto it:nums){
            freq[it]++;
        }
        int maxe=1,c=0;
        for(int i =0;i<=100;i++){
            if(freq[i]>maxe){
                maxe=freq[i];
                c=maxe;
            }
            else if(freq[i]==maxe){
                c+=maxe;
            }
        }
        return c;
    }
};