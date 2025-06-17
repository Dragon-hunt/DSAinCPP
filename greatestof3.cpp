#include <iostream>
using namespace std ;
int main(){
    int f,g,h;
    cout<<"enter num 1 "<<endl;
    cin>>f;
    cout<<"Enter num 2 "<<endl;
    cin>>g;
    cout<<"enter num 3 "<<endl;
    cin>>h;

    if(f>g && f>h){
        cout<<f <<" is the greatest";
    }
    if (g>f && g>h){
        cout << g <<" is the greatest";
    }
    else{
        cout<< h << " is the greatest";
    }
}