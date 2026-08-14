class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        
        int n=nums.size();
        int ans=INT_MAX;
        for(int i=l;i<=r;i++){
            int low=0;
            int high=i-1;
            int sum=0;

            for(int j=low;j<=high;j++){
                sum+=nums[j];
            }
            while(high<n){
                if(sum>0){
                    ans=min(sum,ans);
                }
                low++;
                high++;
                if(high==n)break;
                sum=sum-nums[low-1];
                sum+=nums[high];

            }
        }
        if(ans==INT_MAX)return -1;
        return ans;
        
    }
};