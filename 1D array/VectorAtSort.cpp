#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;      //size  capacity
    v.push_back(4);     //1      1
    v.push_back(34);    //2     2
    v.push_back(5);     //3     4
    v.push_back(12);    //4     4
    v.push_back(40);    //5     8
    v.push_back(11);     //6     8

    v.at(2)=90;         // works like v[2] =90
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }


}
    