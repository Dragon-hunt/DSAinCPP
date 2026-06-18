#include<iostream>
using namespace std;
int main(){

    int n;
    int count=0;
    int a=n;
    cin>>n;
    while(n>0){
        n/=10;
        count++;
    }
    if(a==0) cout<<1;
    else cout<<count;
}
