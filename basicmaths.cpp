// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,c;
//     printf("enter n");
//     cin>>n;
//     if(n>0)
//     {
//     string a=to_string(n);
//     cout<<a.length();
//     }
//     else
//     {
//         n=n*-1;
//         string a=to_string(n);
//     cout<<a.length();

//     }
    


// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,c;
//     printf("enter n");
//     cin>>n;
//     int ori=n;
//     int rev=0;
//     int rem;
//     while(n!=0)
//     {
//         rem=n%10;
//         rev=(rev*10)+rem;
//         n/=10;
//     }
//     cout<<rev;
//     if(rev==ori)
//     printf("palindrome");
//     else
//     printf("not a palindrome");

    
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
    // int a,b;
    // printf("enter a and b");
    // cin>>a>>b;
    // int n;
    // int gcd;
    // if(a>b)
    // n=b;
    // else
    // n=a;
    // if(n==0)
    // cout<<0;
    // for(int i=1;i<=n;i++)
    // {
    //     if(a%i==0 && b%i==0)
    //     gcd=i;
    // }
    // cout<<gcd;

    
// }

// #include<bits/stdc++.h>
// #include<math.h>
// #include<string.h>
// using namespace std;
// int main()
// {
//     int n,sum=0;
//     cout<<"enter a number";
//     cin>>n;
//     int ori=n;
//     int numd=0;
//     while(n!=0)
//     {
//         n/=10;
//         numd++;
//     }
//     n=ori;
//     for(int i=0;i<numd;i++)
//     {
//         int dig=n%10;
//         sum+=pow(dig,numd);
//         n=n/10;
//     }
//     cout<<sum;
//     if(sum==ori)
//     cout<<"armstrong";
//     else
//     cout<<"not";

// }


// #include<bits/stdc++.h>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             cout<<i<<" ";
//         }
//     }

// }


// #include<bits/stdc++.h>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     bool isp=true;
//     for(int i=2;i<=n/2;i++)
//     {
//         if(n%i==0)
//         {
//             isp=false;
//         }
        
//     }
//     if(isp==true)
//     cout<<"prime";
//     else
//     cout<<"not prime";

// }



#include<bits/stdc++.h>
using namespace std;
void revs(char ch[],int start,int end)
{
    if(start<end)
    {
        swap(ch[start],ch[end]);
        revs(ch,start+1,end-1);
    }
    
}
int main()
{
    string s;
    cout<<"enmter string";
    cin>>s;
    char ch[s.length()+1];
    strcpy(ch,s.c_str());
    string ch1=ch;
    int n=strlen(ch);
    int start=0;
    int end=n-1;
    revs(ch,start,end);

    cout<<ch<<endl;
    if(ch1==ch)
    {
        cout<<"palindrome";
    }
    else{
        cout<<"notttttttt";
    }

    return 0;


}