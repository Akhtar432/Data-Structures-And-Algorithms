#include<iostream>
using namespace std;
void PrintArray(int arr[], int n){
    cout<<"Printing Array"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int *arr= new int[n];
    //taking input from user
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    PrintArray(arr, n);
}