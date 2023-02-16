class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int min=nums[0];
        int max_difference=-1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-min>0 && nums[i]-min>max_difference)
            { max_difference=nums[i]-min;
            }
            else if(nums[i]-min<0)
            {
                min=nums[i];
            }
        }

        return max_difference;
    }
};