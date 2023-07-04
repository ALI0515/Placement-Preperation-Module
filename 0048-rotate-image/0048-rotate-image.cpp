class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>v=matrix;
        for(int i=0;i<matrix.size();i++)
        {
           
            int k=matrix.size()-1;
            for(int j=0;j<matrix[0].size();j++)
            {
                matrix[i][j]=v[k-j][i];
            }
        }
        
    }
};