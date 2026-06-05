#include<iostream>
using namespace std;
int main(){
    // less than 35 print roll no which is index
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n ; i++){
        cin>>arr[i];
        if (arr[i]<35) cout<<i<<endl;
    }
    
}