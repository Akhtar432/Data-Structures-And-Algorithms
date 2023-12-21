#include<iostream>
using namespace std;
bool keyPairFound(int arr[], int n, int target){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] + arr[j] == target){
                return true;
            }
        }
        return false;
    }
}
int main(){
    int n , target;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter target sum ";
    cin>>target;
    
    bool ans = keyPairFound(arr,n,target);
    if(ans==1){
        cout<<"yes";
    }
    else{
        cout<<"not";
    }
}