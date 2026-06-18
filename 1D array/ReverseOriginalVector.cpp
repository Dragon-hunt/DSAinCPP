#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector <int>& a){
    for (int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n; // array size
    vector<int> v;
    for (int i=0; i<n; i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    display(v);

    //reverse
    // int i=0;
    // int j=n-1;
    // while(i<=j){
    //     //swap v[i] and v[j]
    //     int temp=v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    //     i++;
    //     j--;
    // }

   // reverse(v.begin(),v.end());

    for(int i=0, j=v.size()-1; i<=j; i++, j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    display(v);

}