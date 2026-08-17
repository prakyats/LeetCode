class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int tsum=0, lsum=0;
        for(auto it:nums) tsum+=it;
        for(int i=0;i<nums.size();i++){
            int rsum=tsum-lsum-nums[i];
            if(lsum==rsum)
            return i;
            lsum+=nums[i];
        }
        return -1;
    }
};