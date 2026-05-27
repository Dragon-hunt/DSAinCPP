#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){

        //inital spaces
        for (int j=1; j<=n-i; j++) cout<<" ";

        //for stars
        for(int k=1; k<=n; k++) cout<< "*";

        cout<< endl;
    }
}