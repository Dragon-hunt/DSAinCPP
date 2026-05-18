#include<iostream>
using namespace std;
int main(){
    //composite or prime
    int n;
    cin>>n;
    bool flag=true;

    for(int i=2; i<n; i++){
        if (n%i==0){
            cout<<"Composite";
            flag= false;
            break;
        }
        
    }
    if(n==1) cout<<"Neither Prime nor composite";
    else if(flag==true) cout<<"Prime";

    


}