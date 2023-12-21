#include<iostream>
using namespace std;
void UniqueElement(int arr[], int n){
    int ans=0;
    for(int i=0; i<n; i++){
        ans = ans^arr[i];
    }
    cout<<ans<<endl;
}
int main(){
    int arr[]={2,10,11,13,10,2,15,13,15};
    int size=9;
    UniqueElement(arr,size);
}