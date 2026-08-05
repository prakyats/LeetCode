class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        long long sum=0, maxi= LONG_MIN;

        int start=0, startans =-1 ,endans=-1;
        for(int i =0;i<n;i++){
            // if(sum==0)start=i;
            sum+=nums[i];
            if(sum>maxi){
                maxi=sum;
                // startans=start,endans=i;
            }

            if(sum<0){
            sum=0;
            }
        }
        return maxi;

    }
};