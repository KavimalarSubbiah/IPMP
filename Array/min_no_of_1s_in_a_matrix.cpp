//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minRow(int N, int M, vector<vector<int>> A) {
        int count=0;
        map<int,int>m;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                if(A[i][j]==1) count++;
            }
            
            m[i]=count;
            count =0;
        }
        
        int min=M+1;
        int index=N;
        
        for(auto &x:m)
        {
            if(x.second<min) {
                min=x.second;
                index=x.first;
        }
        }
        
        return index+1;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }
        Solution ob;
        cout << ob.minRow(N, M, A) << "\n";
    }
}
// } Driver Code Ends