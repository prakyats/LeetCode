class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int z=0,ans=0;
        for(auto it :nums){
        if(it==0)
        z++;
        }

        for(int i= nums.size()-z;i<nums.size();i++){
            if(nums[i]!=0)
            ans++;
        }
        return ans;
    }
};