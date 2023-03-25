class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> is;
        set<int> js;
        int n= matrix.size();
        int m= matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    is.insert(i);
                    js.insert(j);
                }
            }
        }

        for(auto k: is)
        {
            for(int j=0;j<m;j++) matrix[k][j]=0;
        }

        for(auto r: js)
        {
            for(int i=0;i<n;i++) matrix[i][r]=0;
        }
    }
};