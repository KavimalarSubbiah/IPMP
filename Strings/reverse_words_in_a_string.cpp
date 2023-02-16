//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        vector<string>T;
        string str="";
        
        for(int i=0; i<S.size(); i++ ){
            if(S[i]=='.'|| i==S.size()-1)
            {if(i==S.size()-1) str=str+S[i];
            T.push_back(str); if(i!=S.size()-1) T.push_back("."); 
            str="";}
            else
            str=str+S[i];
        }
        
        string Output_String="";
        for(int i=T.size()-1;i>=0;i--)
        Output_String=Output_String + T[i] ;
        
        return Output_String;
    }
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends