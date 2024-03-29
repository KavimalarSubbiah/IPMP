class Solution {
public:
    int trap(vector<int>& height) {
        int left[height.size()];
        int right[height.size()];

        left[0]=height[0];

        for(int i=1;i<height.size();i++)
        {
            left[i]=max(left[i-1],height[i]);
        }


        right[height.size()-1]=height[height.size()-1];

        for(int i=height.size()-2;i>=0;i--)
        {
            right[i]=max(right[i+1],height[i]);
        }

          for(int i=0;i<height.size();i++)
        {
            cout<<right[i]<<endl;
        }

        int ans=0;

        for(int i=0;i<height.size();i++)
        {
            ans+=min(left[i],right[i])-height[i];
           
        }

        return ans;
    }
};