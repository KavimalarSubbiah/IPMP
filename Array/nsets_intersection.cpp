class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int> map;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
               map[nums[i][j]]++;
            }
        }
        for(auto x: map)
        {
            if(x.second==nums.size()) ans.push_back(x.first);
        }

        return ans;
    }
};