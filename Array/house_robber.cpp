class Solution {
public:
    int rob(vector<int>& nums) {
        int incl=nums[0];
        int excl=0;
        int new_excl;

        for(int i=1;i<nums.size();i++)
        {
           new_excl=max(incl,excl);
           incl=excl+nums[i];
           excl=new_excl;
          
        }
        new_excl=max(excl,incl);
        return new_excl;
    }
};