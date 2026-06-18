#include <iostream>
using namespace std ;
int main(){
    int x;
    cin >>x;
    if(x%5==0){
        if (x%3==0){
            cout<<"done!";

        }
        else{
            cout<<"Not divisible";
        }
    }
    else{
        cout<<"NOT done!";
    }
}
