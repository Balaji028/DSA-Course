// #include<bits/stdc++.h>
// using namespace std;

// void PrintVector(vector<int>v)
// {
//     cout<<"in print vector"<<endl;

    

//     for(int i =0;i<v.size();i++){
//         cout<<"v["<<i<<"]="<<v[i]<<endl;
//     }

//     v[0]=10;
//     v[1]=20;
//     v[2]=30;
//     v[3]=40;
//     v[4]=50;

//     for(int i =0;i<v.size();i++){
//         cout<<"v["<<i<<"]="<<v[i]<<endl;
//     }

// }


// int main(){

//     int n;
//     cin>>n;

//     cout<<"in main"<<endl;
//     vector<int>v;

//     for(int i =0;i<n;i++){
//         int value;
//         cin>>value;
         

//         v.push_back(value);

//     }

//     cout<<"before print"<<endl;

//     PrintVector(v);

//     cout<<"after changing"<<endl;

//     for(int i =0;i<n;i++){
//         cout<<v[i]<<endl;
//     }
// }

/* second one*/

#include<bits/stdc++.h>
using namespace std;



void printVector(vector<int>&q){

    cout<<"in printvector"<<endl;

    for(int i =0;i<5;i++){
        q[i]=25;

    }
    cout<<"ends"<<endl;
}




int main(){

    int n ;
    cin>>n;

    vector<int>v;

    for(int i=0;i<5;i++){
        int value;
        cin>>value;
        v.push_back(value);

    }

    printVector(v);
    cout<<"in main"<<endl;

    cout<<v[0]<<endl;
     cout<<v[1]<<endl;
      cout<<v[2]<<endl;
       cout<<v[3]<<endl;
        cout<<v[4]<<endl;




    return 0;
}