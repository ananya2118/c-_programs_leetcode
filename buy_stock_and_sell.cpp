class Solution {
public:
    int maxProfit(vector<int>& a) {
        int profit=0;
        int mini=a[0],cost;
        int n=a.size();
        for(int i=1;i<n;i++)
        {
            cost=a[i]-mini;
            profit=max(profit,cost);
            mini=min(a[i],mini);

        }
        return profit;

};