#include <iostream>
using namespace std ;
int main(){
    int f;
    cout<<"Enter num "<<endl;
    cin>> f;
    if (f%5==0 || f%3==0){
        cout<<"Number is divisible by either 3 or 5";
    }
}