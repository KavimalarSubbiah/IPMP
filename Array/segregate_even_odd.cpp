//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	void segregateEvenOdd(int arr[], int n) {
	    vector<int>s;
	    int k=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]%2==0){s.push_back(arr[i]);}
	    }
	    sort(s.begin(),s.end());
	    
	  
	    
	   vector<int>s1;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]%2!=0){s1.push_back(arr[i]);}
	    }
	    sort(s1.begin(),s1.end());
	        
	        
	        for(int i=0;i<s.size();i++) {arr[i]=s[i]; k++;}
	     
	        
	        for(int i=0;i<s1.size();i++) {arr[k]=s1[i]; k++;}
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregateEvenOdd(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends