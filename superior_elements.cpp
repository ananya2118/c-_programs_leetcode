vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int>leader;
    int n=a.size();
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]>maxi)
        {
            maxi=a[i];
            leader.add(maxi);
        }
    }
    return leader;
}