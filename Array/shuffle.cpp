class Solution {
public:
vector<int> v1,v2;
    Solution(vector<int>& nums) {
     v2=v1=nums;   
    }
    
    vector<int> reset() {
        return v2;
    }
    
    vector<int> shuffle() {
        for(int i=v1.size()-1;i>=0;i--)
        {
            int t=rand()%v1.size();
            swap(v1[t],v1[i]);
        }
        return v1;
    }
};