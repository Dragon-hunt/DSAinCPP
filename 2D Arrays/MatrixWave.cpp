#include<iostream>
#include<vector>
using namespace std;
void display(vector<vector<int>>& arr){
        for(int i=0; i<arr.size(); i++){
            for(int j=0; j<arr[i].size(); j++){
                cout<< arr[i][j]<<" ";
            }
            cout<<endl;
        }
}
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>> arr(m,vector<int> (n));
    for(int i=0; i<m;i++){
        for(int j=0; j<n;j++){
            cin>>arr[i][j];

        }
    }
    //wave form, odd row -> reverse row
    for(int i=0; i<m;i++){
        if(i%2==0){
            for(int j=0; j<n; j++){
                cout<<arr[i][j]<<" ";
            }    
        }
        else{
            for(int j=n-1; j>=0; j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
    cout<<endl;
    //column wave print
    for(int j=0; j<n;j++){
        if(j%2==0){
            for(int i=0; i<m; i++){
                cout<<arr[i][j]<<" ";
            }    
        }
        else{
            for(int i=m-1; i>=0; i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}