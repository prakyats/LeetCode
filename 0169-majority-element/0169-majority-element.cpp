class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n =nums.size();
        int count=0,candidate=nums[0];
        for(auto it:nums){
            if(count==0)candidate=it;
            if(it==candidate)count++;
            else count--;
    }
    return candidate;
    }
};