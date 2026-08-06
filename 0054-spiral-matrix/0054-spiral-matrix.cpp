class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int top=0,bottom=mat.size()-1,left=0,right=mat[0].size()-1;
        vector<int> v;
        while(top<=bottom && left<=right){

        for(int i =left;i<=right;i++){
        v.push_back(mat[top][i]);
        }
        
        for(int i =top+1;i<=bottom;i++){
        v.push_back(mat[i][right]);
        }
        
        if(top!=bottom){
        for(int i =right-1;i>=left;i--)
        v.push_back(mat[bottom][i]);
        }
        
        
        if(left!=right){
            
        for(int i =bottom-1;i>top;i--)
        v.push_back(mat[i][left]);
        }
        right--;
        bottom--;
        left++;
        top++;
        }
        return v;
    }
};