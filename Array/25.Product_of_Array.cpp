//{ Driver Code Starts
//Initial template for C++
//This is with the division Operator(Howvere the question asks for without the division operator)

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
       vector<long long int>vector;
       long long int prod=1;
       int zeroes=0;
        for(int i=0;i<n;i++)
        {
          
            if(nums[i]!=0)
            prod=prod*nums[i];
            if(nums[i]==0) zeroes++;
        }
   
        
        for(int i=0;i<n;i++)
        {
            if(zeroes==1 && nums[i]==0)
            vector.push_back(prod);
            if(nums[i]!=0 && zeroes==0) vector.push_back(prod/nums[i]);
            if(zeroes==1 && nums[i]!=0) vector.push_back(0);
            if(zeroes>1 ) vector.push_back(0);
        }
        
        return vector;
    }
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends