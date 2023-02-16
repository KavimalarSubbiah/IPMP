//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    double waterOverflow(int K, int R, int C) {
        double Container[R][C];
        double Gives[R][C];
        int N=R>C?R:C;
        
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                Container[i][j]=Gives[i][j]=0;
            }
        }
        
        if(K>1) { Container[0][0]=1; Gives[0][0]=K-1;}
        else{ Container[0][0]=K;}
        
            for(int i=1;i<R;i++)
            {
                for(int j=0;j<i+1;j++)
                {
                    Container[i][j]=(j-1<0)? Gives[i-1][j]/2:( Gives[i-1][j-1] + Gives[i-1][j])/2;
                    if(Container[i][j]>1) {Gives[i][j]=Container[i][j]-1; Container[i][j]= 1; }
                    else{ Gives[i][j]=0;}
                }
            }
        
        
        return Container[R-1][C-1];
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int K,R,C;
        
        cin>>K>>R>>C;

        Solution ob;
        cout << fixed << setprecision(6)<< ob.waterOverflow(K,R,C) << endl;
    }
    return 0;
}
// } Driver Code Ends