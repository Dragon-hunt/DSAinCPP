#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;      //size  capacity
    v.push_back(4);     //1      1
    v.push_back(34);    //2     2
    v.push_back(5);     //3     4
    v.push_back(12);    //4     4
    v.push_back(40);    //5     8
    v.push_back(9);     //6     8
    v.push_back(4);     //7     8
    v.push_back(11);    //8     8

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<"size: "<<v.size()<<" capacity: "<<v.capacity()<<endl;
    v.pop_back();
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<"   size: "<<v.size()<<" capacity: "<<v.capacity()<<endl;
}