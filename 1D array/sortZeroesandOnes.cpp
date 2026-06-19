#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void sort01(vector<int>& a){
    int n= a.size();
    int noz=0;
    int noo=0;
    for(int i=0; i<n; i++){
        if(a[i]==0) noz++;
        else noo++;
    }
    for(int i=0; i<n; i++){
        if(i<noz) a[i]=0;
        else a[i]=1;
    }
}

void twopointersort(vector<int>& v){
    int n= v.size();
    int i=0; 
    int j=n-1;
    while(i<j){
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        if(i>j) break;
        if(v[i]==1 && v[j]==0){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    //sort01(v);
    twopointersort(v);
    display(v);
}