#include<iostream>
using namespace std;
int main(){
    int a,b;
    float power=1;
    cin>>a>>b; //b is the exponent, a is base
    bool flag= true; //true means positive

    if(b<0){
        flag=false;
        b=-b;

    } 
   
    for (int i=1; i<=b; i++){
        power=power*a;
    
    }

    if(flag==false) {
        power=1/power;
        b=-b;
    }
    cout<<power;
}