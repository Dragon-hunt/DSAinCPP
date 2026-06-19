#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int i, int j, vector<int> &a){
    while(i<=j){
        int temp=a[i];
        a[i]=a[j];
        a[j]= temp;
        i++;
        j--;
    }
    return;
}
int main(){
    int k;      //steps
    cin>>k;
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    if(k>n) k=k%n;
    reversePart(0, n-1-k,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);
    display(v);
}