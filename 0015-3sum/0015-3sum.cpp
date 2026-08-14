class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    for(int i=0;i<nums.size();i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        int j =i+1;
        int k=nums.size()-1;
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum<0){
                j++;
            }
            else if(sum>0){
                k--;
            }
            else{
            vector<int> temp={nums[i],nums[j],nums[k]};
            ans.push_back(temp);
            j++;
            k--;
            while(j<k && nums[j]==nums[j-1]) j++;
            while(j<k && nums[k]==nums[k+1]) k--;

            }
        }
    }
        return ans;

    }
};
        // set<int> st;
        // set<vector<int>> st1;
        // for(int i =0;i<nums.size();i++){
        //     st.clear();
        //     for(int j=i+1;j<nums.size();j++){
        //         if(st.find(-(nums[i]+nums[j]))!=st.end()){
        //         vector<int> temp = {nums[i],nums[j],-(nums[i]+nums[j])};
        //         sort(temp.begin(),temp.end());
        //         st1.insert(temp);
        //         }
        //         st.insert(nums[j]);
        //     }
        // }
        // vector<vector<int>> ans(st1.begin(),st1.end());
        // return ans;