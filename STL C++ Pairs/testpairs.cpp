#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,string> p;

    pair<int,string>q;


    pair<int,string>p1;
    



    //method one:
    p=make_pair(2,"abc");
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    p1=p;

    //method two:

    // q={2,"def"};

    // cout<<q.first<<endl;
    // cout<<q.second<<endl;

    //examples
    cout<<p1.first<<endl;
    cout<<p1.second<<endl;
    p.first=3;
    p.second="ijk";

    cout<<"now updated"<<endl;

    cout<<p.first<<endl;
    cout<<p.second<<endl;

    cout<<"now p1 values";
    cout<<p1.first<<endl;
    cout<<p1.second<<endl;




    return 0;
}