class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=-1;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                j=i;
                break;
            }
        }
        if(j!=-1)  //////important
        {
        for(int i=j+1;i<n;i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[i],nums[j]);
                j++;
            }
        }
        }
    }
};