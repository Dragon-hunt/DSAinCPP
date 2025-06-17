#include <iostream>
using namespace std ;
int main(){
    char ch;
    cout<<"Enter character "<<endl;
    cin>>ch;
    int ascii= (int)ch;

    // a,c,D, @,^,<,54 all are characters
    // a to z= 97 to 122 , A to Z = 65 to 90
    
    if((ascii>=97 && ascii <=122) || (ascii >= 65 && ascii<= 90)){
        cout<<"Character is an Alphabet"<<endl;
    }
    else {
        cout<<"Character is NOT an alphabet.";
    }
}