#include<iostream>
using namespace std;
int main(){

    /* odd number triangle
    1
    13
    135
    1357*/
    int n;
    cin>>n;
    for(int j=1; j<=n;j++){
        for(int i=1; i<=2*j;i++){
            if(i%2==0) continue;
            cout<<i<<" ";
        
        
        }
        cout<<endl;

    }
    
}


//     //right triangle pattern
//     for(int i=n; i>=0; i--){
//         int j=i;
        
//         while(j>0){
//             cout<<"*";
//             j--;
//         }
//         cout<<endl;
//     }
//     cout<<"\n\n";

//     for(int i=1; i<=n; i++){
//         int j=i;
//         while (j>0){

//             cout<<"*";
//             j--;

//         }
//         cout<<endl;
//     }
    
// }
