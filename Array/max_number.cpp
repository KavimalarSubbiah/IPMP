//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Returns maximum repeating element in arr[0..n-1].
	// The array elements are in range from 0 to k-1
	int maxRepeating(int *arr, int n, int k) {
	    map<int,int> map;
	    
	    for(int i=0;i<n;i++)
	    {
	        map[arr[i]]++;
	    }
	    
	    int max=0;
	    int value=arr[0];
	    
	    for(auto x:map)
	    {
	        if(x.second>max){ max=x.second; value=x.first;}
	        else if(x.second==max){
	            if(x.first<value)
	            value=x.first;
	        }
	    }
	    
	    return value;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxRepeating(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends