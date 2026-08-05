class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n =nums.size(),sum;
        //  vector<int> Presum(n,0);
        //  Presum[0]=nums[0];
        //  for(int i=1;i<n;i++){
        //     Presum[i]=Presum[i-1]+nums[i];
        //  }
        long long Presum=0;
         unordered_map<int,int> m;
         m[0]=-1;
         for(int j=0; j<n;j++){
            Presum+=nums[j];
            int val=Presum%k;
            if(m.find(val)!=m.end()){
                if(j-m[val]>=2)return true;
            }
            if(m.find(val)==m.end()){
                m[val]=j;
            }
         }
         return false;
    }
};