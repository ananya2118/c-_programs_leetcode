class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr(n);
        int pi=0,ni=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                arr[pi]=nums[i];
                pi+=2;
            }
            else
            {
                arr[ni]=nums[i];
                ni+=2;
            }
        }
        return arr;
    }
};