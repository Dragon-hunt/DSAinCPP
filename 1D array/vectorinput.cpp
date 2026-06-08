#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v;

    int n;
    cin>>n;   //size of dynamic array we want

    //input
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    //printing
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}