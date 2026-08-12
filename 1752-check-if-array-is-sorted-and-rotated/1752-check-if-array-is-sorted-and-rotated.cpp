class Solution {
public:
    bool check(vector<int>& nums) {
        int i, c=0;
        for(i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]) c++;
        }
        if (nums[nums.size()-1] > nums[0]) c++;
        if(c<=1 )return 1;
        else return 0;
    }
};