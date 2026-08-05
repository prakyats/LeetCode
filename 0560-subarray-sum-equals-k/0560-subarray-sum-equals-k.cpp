class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
         int n =nums.size(),count=0;
         vector<int> Presum(n,0);
         Presum[0]=nums[0];
         for(int i =1; i<n ;i++){
            Presum[i]=Presum[i-1]+nums[i];
         }
  
         unordered_map<int,int> m;
         for(int j=0;j<n;j++){
            if(Presum[j]==k)count++;

            int val=Presum[j]-k;
            if(m.find(val)!=m.end()){
                count+=m[val];
            }
            if(m.find(Presum[j])==m.end()){
                m[Presum[j]]=0;
            }
            m[Presum[j]]++;

         }
         return count;
    }
};