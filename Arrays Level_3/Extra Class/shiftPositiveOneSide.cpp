#include<iostream>
using namespace std;
int mian(){
    //two pointer approach
    int arr[]={-1,4,-6,5,-3,8,-4};
    int n=7;
    int s=0; 
    int e=n-1;
    while(s<=e){
        if(arr[s]>0){
            s++;
        }
        else if(arr[s]<0){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}