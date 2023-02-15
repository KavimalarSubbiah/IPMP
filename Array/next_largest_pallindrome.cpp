#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

    int areAll9s(int num[], int n)
    {
        for(int i=0;i<n;i++)
        {
            if(num[i]!=9) return 0;
            
            return 1;
        }
    }
    
    vector<int> generateNextPalindromeUtil(int num[], int n) {
        
        vector<int> v;
	    
	    bool leftsmaller= false;
	    
	    int mid=n/2;
	    int i=mid-1;
	    int j= n%2?mid:mid+1;
	    
	    while(i>=0 && num[i]==num[j])
	    {
	        i--;
	        j++;
	    }
	    
	    if(i<0 || num[i]<num[j])
	    {
	        leftsmaller=true;
	    }
	    
	    if(leftsmaller)
	    {
	        while(i>=0)
	        {
	            num[j]=num[i];
	            i--;
	            j++;
	        }
	        
	         int carry=1;
	         int i=mid-1;
	        
	        if(n%2==1)
	        {
	            num[mid]=num[mid]+1;
	            carry=num[mid]/10;
	            num[mid]=num[mid]%10;
	            j=mid+1;
	        }
	        else
	        j=mid;
	        
	        while(i>=0)
	        {
	            num[i]=num[i]+carry;
	            carry=num[i]/10;
	            num[i]=num[i]%10;
	            num[j]=num[i];
	            j++;
	            i--;
	        }
	        
	    }
	    
	    for(int i=0;i<n;i++)
	    v.push_back(num[i]);
	    
	    return v;
	    
	}
    
	vector<int> generateNextPalindrome(int num[], int n) {
	      vector<int> v;
	    if(areAll9s(num,n)==1)
	    {
	        for(int i=0;i<n+2;i++)
	        {
	            if(i==0 || i==n+2)
	            {
	                num[i]=1;
	            }
	            else
	            num[i]=0;
	        }
	        
	        for(int i=0;i<n;i++)
	    v.push_back(num[i]);
	    
	    return v;
	    }
	    
	    else
	    return generateNextPalindromeUtil(num, n);
	}

};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int num[n];
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        Solution ob;
        auto ans = ob.generateNextPalindrome(num, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends