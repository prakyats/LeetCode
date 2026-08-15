class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int maxi=0,index=0;
        for(int i=0;i<m;i++){
            int c=0;
            for(int j=0;j<n;j++){
               if(mat[i][j]==1)
               c++;
            }
            if(c>maxi){
                index=i;
                maxi=c;
            }
        }
        return {index,maxi};
    }
};