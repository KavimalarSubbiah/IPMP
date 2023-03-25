//add a case for if the last element is the index
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>left_side;
        vector<int> right_side;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            left_side.push_back(sum);
            sum+=nums[i];
        }
        sum=0;

        for(int i=0;i<left_side.size();i++)
        cout<<left_side[i]<<endl;

        for(int i=nums.size()-1;i>=0;--i)
        {
            right_side.push_back(sum);
            sum+=nums[i];
        }

        for(int i=0;i<left_side.size();i++)
        cout<<right_side[i]<<endl;

        for(int i=0;i<nums.size()-1;i++)
        {
            if(left_side[i]==right_side[nums.size()-i-1]) return i;
        }
        return -1;
    }
};