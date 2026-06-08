#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    //right now v is a array of 0 size

    //inserting elements
    
    v.push_back(4);     //pushback pushes the element from back into array
    cout<<v.size()<<endl;
    //now after 4 pushes, the size becomes 1 of array 'v'
    v.push_back(9);     // now array is{4,9}
    cout<<v.size()<<endl;
    v.push_back(11);
    cout<<v.size()<<endl;   //v.size() tells the size of array

    //accessing/updation
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";


    /*v.capacity() shows the max capacity vector has for including elements
    remember the vector doubles the size whenever it runs out of space for a new element
    */
    
}