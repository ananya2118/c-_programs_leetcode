
// finding largest number in an array

int secondlargest(vector<int>arr ,int n)
{
    int la=arr[0];
    int sl=-1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>la)
        {
            sl=la;
            la=arr[i];
        }
        else if(arr[i]<la && arr[i]>sl)
        {
            sl=arr[i];
        }
    }
    return sl;
}

int secondsmallest(vector<int>arr ,int n)
{
    int sm=arr[0];
    int ssm=INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<sm)
        {
            ssm=sm;
            sm=arr[i];
        }
        else if(arr[i]!=sm && arr[i]<ssm)
        {
            ssm=arr[i];
        }
    }
    return ssm;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int slargest=secondlargest(a,n);
    int ssmallest=secondsmallest(a,n);
    return {slargest,ssmallest};
}
