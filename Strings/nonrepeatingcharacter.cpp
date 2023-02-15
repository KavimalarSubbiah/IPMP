//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       map<char,int> m;
       map<char,int> p;
       
       for(int i=0;i<S.size();i++)
       {
           m[S[i]]++;
           if(m[S[i]]>1) p.erase(S[i]);
           else
           {
               p[S[i]]=i;
           }
       }
       
       int min=S.size();
       
       for(auto &x: p)
       {
           if(x.second<min) min=x.second;
           
       }
       
       if(min==S.size()) return '$';
       
       return S[min];
       
       
       
       
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends