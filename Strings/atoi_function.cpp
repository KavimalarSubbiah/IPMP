//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        int returny=0;
        
        if(str[0]=='-')
        {
          for(int i=1;i<str.size();i++)
        {
            if(!(48<=int(str[i]) && int(str[i])<=57)) return -1;
                returny= returny*10 + int(str[i])-48;
            
            
        } 
        }
        else{
        
        for(int i=0;i<str.size();i++)
        {
            if(!(48<=int(str[i]) && int(str[i])<=57)) return -1;
                returny= returny*10 + int(str[i])-48;
            
            
        }
        }
        
        if(str[0]=='-') return -1*returny;
        
        return returny;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends