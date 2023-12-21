#include<iostream>
using namespace std;
void PrintPairSum(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i]<<","<<arr[j]<<"="<<arr[i]+arr[j]<<endl;
        }
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=9;
    PrintPairSum(arr,size);
}