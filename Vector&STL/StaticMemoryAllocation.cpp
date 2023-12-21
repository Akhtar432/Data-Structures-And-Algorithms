#include<iostream>
using namespace std;
void PrintArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6]={4,3,6,7,2,8};    
    int size=6;
    PrintArray(arr, size);
}