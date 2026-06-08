#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector <int> v(5); //created an array with 5 size and each element has 0 value
    cout<<v[3]<<endl; // output 0

    vector<int> vec(5,7);   //created 5 elements each with value 7
    cout<<vec[4];       //output 7
    
}