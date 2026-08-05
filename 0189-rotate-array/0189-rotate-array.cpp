class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i =0 , n=nums.size();
        vector<int> arr(n);
        k%=n;
        for(i=0;i<n;i++){
        arr[(i+k)%n]=nums[i];
        }
        nums=arr;
    }

};