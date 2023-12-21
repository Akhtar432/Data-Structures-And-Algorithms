#include<iostream>
using namespace std;
void PrintPairs(int arr[], int n, int key){
    int ans=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
           cout<<arr[i]-arr[j]<<" ";
        }
    }
}
int main(){
    int arr[]={10,20,30};
    int size=3;
    int key;
    cin>>key;
    PrintPairs(arr , size, key);
    //cout<<ans;
}