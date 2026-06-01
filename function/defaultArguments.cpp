#include<iostream>
using namespace std;

void fun(int x=5, int y=6){     //5,6 are default values of arguments
        cout<<x<< " "<<y;
        cout<<endl;
    }
int main(){
    int a=9;
    int b=10;
    fun();
    cout<<endl;
    fun(a,b);       // now we gave arguments to fn so it overwrites default arg
    
}