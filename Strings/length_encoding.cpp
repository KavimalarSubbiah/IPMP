//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  char temp=src[0];
  int count=0;
  int i=0;
  string encodedstring="";
  for(auto x:src)
  {
     if(x==temp) count++;
     else{
         encodedstring+=temp;
       
         encodedstring+=to_string(count);
         temp=x;
         count=1;
         
     }
  }
  
  encodedstring+=temp;
  encodedstring+=to_string(count);
  return encodedstring;
}     
 
