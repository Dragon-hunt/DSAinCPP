#include <iostream>
using namespace std;
int main(){
    int f;
    cout<<"Enter num"<<endl;
    cin>> f;
    // if((f%5==0 || f%3==0) && f%15!=0){
    //     cout<<"Num meets criteria";
    
    // }
    // else{
    //     cout<<"Doesnt meets criteria";
    // }




    if (f%3==0 || f%5==0){
        if (f%15!=0){
            cout<<"Meets criteria";
        }
        else{
            cout<<"Doesn't meets criteria";
        }
    }
    else{
        cout<<"Nope";
    }
}