class Solution {
public:
    void sortColors(vector<int>& nums) {
         int i , j, n=nums.size();
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(nums[j]<nums[i]) swap(nums[i],nums[j]);
            }
        }
        
    }
};