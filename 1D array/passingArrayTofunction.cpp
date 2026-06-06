#include<iostream>
using namespace std;
void display(int a[], int size){    //a here is acting as ptr -> int* a
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[], int size){     //same as above
    b[0]=100;
    cout<<endl;
    return;
}

int main(){
    int arr[5] ={23,5,67,34,11};
    int size=sizeof(arr)/sizeof(arr[0]);
    //accessing array's element in another function
    display(arr,size);

    //updation
    change(arr,size);
    display(arr,size);   //checking if change happens
}