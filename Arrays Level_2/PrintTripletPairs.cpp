#include<iostream>
using namespace std;
void PrintTripletPairs(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
            }
        }
    }
}
int main(){
    int arr[]= {1,2,3,4,5,6};
    int size = 6;
    PrintTripletPairs(arr, size);
    
}