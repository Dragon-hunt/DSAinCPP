#include<bits/stdc++.h>
using namespace std;
void display(vector<vector<int>>& a){
        for(int i=0; i<a.size();i++){
            for(int j=0; j<a[i].size(); j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
}
int main(){
    
    int m,n;
    cin>>m>>n;
    vector<vector<int>> arr(m, vector<int>(n));
    for(int i=0; i<m; i++){
        for(int j=0; j<n;j++){
            cin>>arr[i][j];
        }
    }
    display(arr);
    for(int i=0; i<m; i++){
        for (int j=i+1; j<n; j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
            
        }
    }
    for(int k=0; k<n;k++){
        int i=0;
        int j=n-1;
        while(i<=j){
            int temp=arr[k][j];
            arr[k][j]=arr[k][i];
            arr[k][i]=temp;
            i++;
            j--;
        }
    }
    cout<<endl;
    display(arr);

}