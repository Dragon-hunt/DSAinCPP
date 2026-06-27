#include<iostream>
using namespace std;
int main(){

    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //spiral
    int minr=0, minc=0;
    int maxr=m-1;
    int maxc=n-1;
    while(minr<=maxr && minc<=maxc){
        //right
        for(int i=minc; i<=maxc; i++){
            cout<<arr[minr][i]<<" ";
        }
        if(minc>maxc || minr>maxr) break;
        minr++;
        //down
        for(int j=minr; j<=maxr; j++){
            cout<<arr[j][maxc]<<" ";
        }
        maxc--;
        if(minc>maxc || minr>maxr) break;
        //left
        for(int i=maxc; i>=minc; i--){
            cout<<arr[maxr][i]<<" ";
        }
        maxr--;
        if(minc>maxc || minr>maxr) break;
        //up
        for(int j=maxr;j>=minr; j--){
            cout<<arr[j][minc]<<" ";
        }
        minc++;
        if(minc>maxc || minr>maxr) break;
    }

}