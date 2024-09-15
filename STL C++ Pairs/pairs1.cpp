#include<bits/stdc++.h>

using namespace std;
int main(){


    //method one pair declaration

     pair<int,int>p;
     p=make_pair(2,5);
     cout<<p.first<<endl;
     cout<<p.second<<endl;

     // method two pair declaration

     pair<int,int>q;
     q={25,30};
     cout<<q.first<<endl;
     cout<<q.second<<endl;

     // pair assignment

    pair<int,int>r;
    r=p;
    cout<<r.first<<endl;
    cout<<r.second<<endl;

    // pair reference

    pair<int,int>&t= p;
    cout<<t.first<<endl;
    cout<<t.second<<endl;
    cout<<"now updating the value"<<endl;
    t.first=55;
    t.second=55;
    cout<<"now printing the first values"<<endl;
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    //pair array

    pair<int , int >u_array[5];

    u_array[0]={1,2};
    u_array[1]={3,4};
    u_array[2]={5,6};

    cout<<u_array[0].first<<endl;

    for(int i =0;i<5;i++){
        cout<<u_array[i].first<<" "<<u_array[i].second<<endl;
    }

    pair<int,string>v[10];

    v[0]={10,"abc"};
    v[1]=make_pair(11,"def");

    for(int i =0;i<2;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

    cout<<"now w"<<endl;

    pair<pair<int,string>,pair<int,int>>w;

    w=make_pair(make_pair(12,"abc"), make_pair(10,20));
    pair<int,string>x=w.first;
    cout<<x.first<<endl;
    cout<<x.second<<endl;


    
    



    

















    return 0;
}