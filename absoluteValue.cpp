// #include <iostream>
// using namespace std;
// int main
// (){
//    cout<<"Enter num";
//    int c;
//    cin>> c;
//    if (c<0){
//     cout<<endl<<-c;

//    }
//    else{
//     cout<<endl<< c;
//    } 
// }



//Better way
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter Num"<<endl;
    int x;
    cin>>x;
    if(x<0){
        x=-x;
    }
    cout<<x;
}