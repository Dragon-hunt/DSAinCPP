#include<iostream>
using namespace std;
int hcf(int x, int y){
    int factor=1;
    for(int i=min(x,y); i>=1 ; i--){
        if(x%i==0 && y%i==0){
            factor=i;
            break;
        }
        

    }
    cout<<factor;
}

int main(){
    int a,b;
    cin>>a>>b;
    hcf(a,b);
}