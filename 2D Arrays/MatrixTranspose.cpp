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
    cin>>m;
    cin>>n;
    vector<vector<int>> arr(m,vector<int> (n));
    for(int i=0; i<m;i++){
        for(int j=0; j<n;j++){
            cin>>arr[i][j];

        }
    }
    display(arr);
    vector<vector<int>> transpose(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            transpose[i][j]=arr[j][i];
        }
    }
    cout<<endl;
    display(transpose);
}