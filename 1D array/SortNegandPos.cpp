#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<"  ";
    }
    cout<<endl;
}
void sortbytwoptrs(vector<int>& v){
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[i]<0)  i++;
        if(v[j]>=0) j--;
        else if(v[i]>=0 && v[j]<0){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
        }
    }
}
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    sortbytwoptrs(v);
    display(v);
}