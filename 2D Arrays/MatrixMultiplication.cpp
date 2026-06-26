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
    
    int p,q;
    cin>>p>>q;
    
    if(n==p){
        vector<vector<int>> brr(p,vector<int> (q));
        for(int i=0; i<p;i++){
            for(int j=0; j<q;j++){
                cin>>brr[i][j];

            }
        }
        vector<vector<int>> arr(m,vector<int> (n));
        for(int i=0; i<m;i++){
            for(int j=0; j<n;j++){
                cin>>arr[i][j];

            }
        }
        display(arr);
        cout<<endl;
        display(brr);
        cout<<endl;
        //resultant matrix
        vector<vector<int>> res(m, vector<int>(q));
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                res[i][j]=0;
                for(int k=0; k<n; k++){
                    res[i][j]+=arr[i][k]* brr[k][j];
                }
            }
        }
        display(res);
    }
    else{
        cout<<"The matrices can not be multiplied"<<endl;
    }
    


}
