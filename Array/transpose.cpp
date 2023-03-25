//have to fine tune wrt 0s

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
          if(n>m)
        {
            vector<int>arr;
            for(int i=0;i<n;i++)  arr.push_back(0);
            for(int i=m;i<n;i++)
            matrix.push_back(arr);  
        }
          if(m>n)
        {
            vector<int>arr;
            for(int i=0;i<m;i++)  
            matrix[i].push_back(0);  
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<i;j++)
            swap(matrix[i][j],matrix[j][i]);
        }

        if(n>m)
        {
            for(int i=0;i<n;i++)
            {for(int j=1;j<m+1;j++)
            matrix[i].erase(matrix[i].begin()+n-j);}
        }

          if(m>n)
        {
            for(int i=0;i<m;i++)
            matrix.erase(matrix.begin()+m-1);
        }

        return matrix;
    }
};