#include<bits/stdc++.h>
using namespace std;
int main()
{

}


//containers

//pairs
void explainPair()
{
    pair<int,int> p={1,3};

    cout<< p.first <<" "<<p.second;

    pair<int,pair<int,int>> q = {1,{3,4}};

    cout << q.first <<" "<< q.second.first<<" "<< q.second.second;

    pair<int,int>arr[]={{1,2},{3,4},{5,6}};

    cout<<arr[1].second; //4

}


//vectors

void explainVector()
{
    vector<int> v; // dynamic in nature we can increase the size of the vector but we cant do itr in array

    v.push_back(1);  //{1}
    v.emplace_back(2);   //{1,2}

    vector<pair<int,int>>vec;

    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> v(5,100); ////{100,100,100,100,100}
    vector<int> v1(5); ///{0,0,0,0,0}
    vector<int> v2(v1); // creates a copy of vector 1 and stores it in v2


    //assessing vectors
    vector<int>::iterator it = v.begin();   //v.begin() gives the memory in which the element is stored

    it++;
    cout<<*(it)<<" ";

    it=it+2;
    cout<<*(it)<<" ";

    vector<int>::iterator it = v.end(); //v.end() points to a memory location after last elememnt to access the last element to it-- 

    vector<int>::iterator it = v.rend();  //reverse

    vector<int>::iterator it = v.rbegin();  //points to last element and moves in backward direction if we do it++
   
    cout<<v.back()<<" "; // last element

    for(vector<int>::iterator it = v.begin();it!=v.end();it++)
    {
        cout<<*(it)<<" ";
    }

    for(auto it = v.begin();it!=v.end();it++)  // auto means auto assignation
    {
        cout<<*(it)<<" ";
    }

    for(auto it:v)
    {
        cout<<it<<" ";
    }
    // {10,11,12,13}
    v.erase(v.begin()+1);  //{10,12,13}

    // {10,20,12,23,35}
    v.erase(v.begin()+2,v.begin()+4); //{10,20,35} first is included last is not included

    vector<int>v(2,100)  //{100,100}

    v.insert(v.begin(),300)   //{300,100,100}

    v.insert(v.begin()+1,10) //{100,10,10,100,100}

    vector<int>copy(2,50);//{50,50}

    v.insert(v.begin(),copy.begin(),copy.end()); //{50,50,100,10,10,100,100}

    //{10,20}
    cout<<v.size();//2

    v.clear();
    //empty the vector

    cout<<v.empty();
 
}

void explainlist(){

    list<int> ls;  //it gives you front operations as well
    ls.push_back(2); //{2}
    ls.emplace_back(4); //{2,4}
    ls.push_front(5); //{5,2,4}
    ls.emplace_front(); //{2,4}

}


void explaindeque()
{

    //similar to list and vector

    deque<int>dq;



    // ................
}

string s="123";
sort(s.begin(),s.end())
do{
    cout<<s<<endl;
}while(next_permutation(s.begin(),s.end()));
// it prints all 8 permutations 123,132,213,231,312,321

// but if s="231" it prints 231,312,321

// so it is neceassry to start in sorted  order