#include<iostream>
using namespace std;
int main(){

    //rectangle pattern
    
    int n,m;
    cout<<"Enter No. of Rows and how many character per row"<<endl;
    cin>>n>>m;

    for (int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<endl;


    //sqare matrix
    
    int num;
    cout<<"Enter num for you want sqaure matrix"<<endl;
    cin>>num;
    for(int i=1; i<=num; i++){
        for(int j=1;j<=num;j++ ){
            cout<<j;
        }
        cout<<endl;
    }

}
