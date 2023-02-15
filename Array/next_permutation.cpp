//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        int el;
        int el_index;
        int min_index;
        bool flag=false;
        
        for(int i=N-1;i>0;i--)
        {
          if(arr[i-1]<arr[i])  {  el=arr[i-1]; el_index=i-1; flag=true; break;}
        }
        
        
        if(flag==false) {sort(arr.begin(),arr.end()); return arr;}
        
        int min=arr[el_index+1];
        min_index=el_index+1;
        
        for(int i=el_index+1;i<N;i++)
        {
          if(arr[i]<min && arr[i]>arr[el_index])
          {min=arr[i];
          min_index=i;
          }
        }
        
        int temp=arr[min_index];
        arr[min_index]= arr[el_index];
        arr[el_index]=temp;
        
        
        sort(arr.begin()+el_index+1, arr.end());
        
        return arr;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends