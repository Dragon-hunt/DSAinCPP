#include <iostream>
using namespace std ;
int main(){
    //variable upgradation
    int x=7;
    x=4;
    x=5;

    cout<<x<<endl;


    //x is already defined as int above
    //no need to redefine
    x = 9;
    x*=3;
    cout<<x;

    /*
    This is multi line comment
    here is how it works
    can add n number of lines*/


    //Increament & Decrement
    x=5;
    cout<<x++<<endl; /* post increment, runs linewise 
                    so addition will happen after print*/

    cout<<x;

    x=8;
    cout<<endl<<--x; // pre decrement
}