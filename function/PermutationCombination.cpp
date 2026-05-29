#include<iostream>
using namespace std;

int fact(int x){
    int f=1;
    for(int i=2; i<=x; i++){
        f*=i;
    }
    return f;
}

int combination(int n, int r){
    int c= fact(n)/(fact(r) *fact(n-r));
    return c;
}

int permutation(int n, int r){
    int p= fact(n)/fact(n-r);
    return p;
}

int main(){
    int n,r;
    cin>>n>>r;

    cout<<"nCr is: "<<combination(n,r)<<endl;
    cout<<"nPr is: "<<permutation(n,r);
}
