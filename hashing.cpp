// hashing means prestoring and fetching  
// it means single precomputataion

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     int arr[n];
//     cout<<"enter elements";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i];
//     }

//     // cout<<arr;
//     int hash[n]={0};
//     for(int i=0;i<n;i++)
//     {
//         hash[arr[i]]+=1;
//     }
//     cout<<"hash values are ";
//     for(int i=0;i<n;i++)
//     {
//         cout<<hash[i];
//         cout<<" ";
//     }
//     // cout<<hash;
//     int p;
//     cout<<"enter tghe numbetr ";
//     cin>>p;
//     cout<<hash[p];
//     return 0;
// }


// if we want to store more than 10^6 values we can  but if we declare them globally then it will work 
// globally we can store only upto 10^7

// number hashing


// character hashing


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string n;
//     cout<<"enter a string";
//     cin>>n;
//     int hash[26]={0};
//     for(int i=0;i<n.size();i++)
//     {
//         hash[n[i]-'a']+=1;
//     }
    

//     // cout<<arr;
    
//     cout<<"hash values are ";
//     for(int i=0;i<n.size();i++)
//     {
//         cout<<hash[i];
//         cout<<" ";
//     }
//     // cout<<hash;
//     char p;
//     cout<<"enter tghe numbetr ";
//     cin>>p;
//     cout<<hash[p-'a'];
//     return 0;
// }


// hashing all the characters 


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string n;
//     cout<<"enter a string";
//     cin>>n;
//     int hash[256]={0};
//     for(int i=0;i<n.size();i++)
//     {
//         hash[n[i]]+=1;
//     }
    

//     // cout<<arr;
    
//     cout<<"hash values are ";
//     for(int i=0;i<n.size();i++)
//     {
//         cout<<hash[i];
//         cout<<" ";
//     }
//     // cout<<hash;
//     char p;
//     cout<<"enter tghe numbetr ";
//     cin>>p;
//     cout<<hash[p];
//     return 0;
// }









            ////important program

// to store large values greater than 10^7 the STL comes into picture

// and we use map for this 






// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     int arr[n];
//     cout<<"enter elements";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i];
//     }

//     map<int,int>mpp;
//     for(int i=0;i<n;i++)
//     {
//         mpp[arr[i]]+=1;
//     }

//     // for(int i=0;i<n;i++)
//     // {
//     //     cout<<arr[i]<<" "<<mpp[arr[i]]<<endl;
//     // }



// //////important
//     // for(auto it = mpp.begin(); it != mpp.end(); ++it) {
//     //     cout << it->first << " " << it->second << endl;
//     // }

//     for(auto it : mpp) {
//         cout << it.first << "->" << it.second << endl;
//     }

//     // cout<<hash;
//     int p;
//     cout<<"enter tghe numbetr ";
//     cin>>p;
//     cout<<mpp[p];
//     return 0;
// }






//store characters 


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     char arr[n];
//     cout<<"enter elements";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i];
//     }

//     map<char,int>mpp;
//     for(int i=0;i<n;i++)
//     {
//         mpp[arr[i]]+=1;
//     }

//     for(auto it : mpp) {
//         cout << it.first << "->" << it.second << endl;
//     }

//     // cout<<hash;
//     int p;
//     cout<<"enter tghe numbetr ";
//     cin>>p;
//     cout<<mpp[p];
//     return 0;
// }



// time complexity

// map
// in map everything is stored in soretd order but in unordered map it depends when we run everytime

// storing or fetching takes O(log(n)) in all 3 w,b,a cases

//unordered map    ---- it take time complexity o(1) for best and average and for worst its o(n)

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter n";
    cin>>n;
    int arr[n];
    cout<<"enter elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]+=1;
    }

    for(auto it : mpp) {
        cout << it.first << "->" << it.second << endl;
    }

    // cout<<hash;
    int p;
    cout<<"enter tghe numbetr ";
    cin>>p;
    cout<<mpp[p];
    return 0;
}