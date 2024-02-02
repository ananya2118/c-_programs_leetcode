// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         cout<<"*";
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         cout<<"*";
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         cout<<j;
//         cout<<endl;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         cout<<i;
//         cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     for(int i=n;i>=1;i--)
//     {
//         for(int j=n;j>n-i;j--)
//         cout<<"*";
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n-i+1;j++)
//         cout<<j;
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n-i-1;j++)
//         cout<<" ";
//         for(int j=0;j<(2*i)+1;j++)
//         cout<<"*";
//         for(int j=0;j<n-i-1;j++)
//         cout<<" ";
//         cout<<endl;

//     }
//     return 0;
// }

//////////////imppppppppppppppppppp

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<i;j++)
//         cout<<" ";
//         for(int j=0;j<(2*n)-((2*i)+1);j++)
//         cout<<"*";
//         for(int j=0;j<i;j++)
//         cout<<" ";
//         cout<<endl;

//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n-i-1;j++)
//         cout<<" ";
//         for(int j=0;j<(2*i)+1;j++)
//         cout<<"*";
//         for(int j=0;j<n-i-1;j++)
//         cout<<" ";
//         cout<<endl;

//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<i;j++)
//         cout<<" ";
//         for(int j=0;j<(2*n)-((2*i)+1);j++)
//         cout<<"*";
//         for(int j=0;j<i;j++)
//         cout<<" ";
//         cout<<endl;

//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<i+1;j++)
//         cout<<"*";
//         cout<<endl;

//     }
//     for(int i=n-1;i>0;i--)
//     {
//         for(int j=i;j>0;j--)
//         cout<<"*";
//         cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//         if((i+j)%2==0)
//         cout<<"1";
//         else
//         cout<<"0";
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     int c=1;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//         cout<<c;
//         cout<<" ";
//         c+=1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     int space=2*(n-1);
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<j;
//         }
//         for(int j=1;j<=space;j++)
//         {
//             cout<<" ";
//         }
//         for(int j=i;j>=1;j--)
//         {
//             cout<<j;
//         }

//         cout<<endl;
//         space-=2;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(char ch='A';ch<='A'+i;ch++)
//         cout<<ch<<" ";
//         cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     for(int i=n;i>0;i--)
//     {
//         for(char ch='A';ch<'A'+i;ch++)
//         cout<<ch<<" ";
//         cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     char ch ='A';
//     int j;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=0;j<i;j++)
//         cout<<ch<<" ";
//         ch='A'+i;
//         cout<<endl;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n";
    cin>>n;
    char ch ='A';
    int j;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        char ch='A';
        int bp=((2*i)+1)/2;
        for(int j=1;j<=(2*i)+1;j++)
        {
            cout<<ch;
            if(j<=bp) ch++;
            else ch--;
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}