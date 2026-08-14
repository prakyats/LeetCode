class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int m=matrix.size();
        unordered_set<int> st;
        for(int i=0;i<m;i++){
            st.clear();
            for(int j=0;j<m;j++){
                st.insert(matrix[i][j]);
            }
            if(st.size()!=m)
            return false;
        }
        for(int i=0;i<m;i++){
            st.clear();
            for(int j=0;j<m;j++){
                st.insert(matrix[j][i]);
            }
            if(st.size()!=m)
            return false;
        }
        return true;
    }
};