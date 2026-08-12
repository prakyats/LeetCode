class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto it:nums)
        mp[it]++;

        vector<int> arr;
        for(auto it:mp){
            if(it.second>=2)
            arr.push_back(it.first);
        }
        return arr;
    }
};