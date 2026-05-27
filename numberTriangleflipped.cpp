#include<iostream>
using namespace std;
int main(){
    //no. tr. flipped
    int n;
    cin>>n;

    for(int i=1;i<=n; i++){
        // spaces
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        
        //no. triangle
        for(int k=1; k<=i;k++) cout<<k;

        cout<<endl;
    }

}