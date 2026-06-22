#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}
vector<int> merge(vector<int>& v1, vector<int> &v2){
    int n=v1.size();
    int m=v2.size();
    vector<int> v(n+m);
    int i=0;
    int j=0; 
    int k=0;
    while(i<n && j<m){
        if(v1[i]<v2[j]){
            v[k]=v1[i];
            i++;
        }
        else{
            v[k]=v2[j];
            j++;
        }
        k++;
    }
    if(i==n){
        while(j<m){
            v[k]=v2[j];
            j++;
            k++;
        }
    }
    if(j==m){
        while(i<n){
            v[k]=v1[i];
            i++;
            k++;
        }
    }
    return v;
}
int main(){
    
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(7);
    display(v1);

    vector<int> v2;
    v2.push_back(2);
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(8);
    v2.push_back(9);
    v2.push_back(10);
    display(v2);
    vector<int> v=merge(v1,v2);
    display(v);
}