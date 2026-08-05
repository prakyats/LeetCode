class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
      int n =nums.size(),sum=0,count=0;
      long long Presum=0;
      unordered_map<int,int> m;
      m[0]=1;
      for(int j =0;j<n;j++){
        Presum+=nums[j];
        int val=Presum%k;
        val = (val + k) % k;
        if(m.find(val)!=m.end()){
           count+=m[val];
        }
        if(m.find(val)==m.end()){
            m[val]=0;
        }
        m[val]++;
    }
    return count;
    }  
};