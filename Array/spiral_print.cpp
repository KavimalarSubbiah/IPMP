//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int>ans;
        int lr=0;
        int lc=0;
        int i=0;
        while(lr<r && lc<c)
        {
            
            for(int i=lc;i<c;++i)
            {
                ans.push_back(matrix[lr][i]);
               //cout<<(matrix[lr][i])<<endl;
            }lr++;
            
            for(int i=lr;i<r;++i)
            {
                ans.push_back(matrix[i][c-1]);
                //cout<<(matrix[i][c-1])<<endl;
            }c--;
            
            if(lr<r)
            {
                for(int i=c-1;i>=lc;--i)
                {
                    ans.push_back(matrix[r-1][i]);
                  
                }r--;
            }
            
            if(lc<c)
            {
                for(int i=r-1;i>=lr;--i)
                {
                    ans.push_back(matrix[i][lc]);
       
                }
                lc++;
            }
        }
            
        
    
        return ans;
  
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends