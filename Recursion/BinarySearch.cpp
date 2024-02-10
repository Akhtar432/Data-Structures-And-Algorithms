#include<iostream>
using namespace std;
bool binarySearch(int arr[], int start, int end, int target){
    int mid = (start+end)/2;
    //base case
    if(start<end){
        true;
    }
    if(mid == target){
        return true;
    }
    else if(arr[mid] < target){ //right me jao satrt = mid+1;
        //recursiive call
        bool ans = binarySearch(arr, mid+1, end, target);
        return ans;
    }
    else if(arr[mid] > target){ //left me jao end = mid-1;
        //recursiive call
        bool ans = binarySearch(arr, start, mid-1, target);
        return ans;
    }
}
int main(){
    int arr[]= {10,20,30,40,50};
    int size = 5;
    int target = 40;
    int start = 0;
    int end = size-1;
    bool isFind = binarySearch(arr, start, end, target);
    if(isFind){
        cout<<"Target is Present"<<endl;
    }
    else{
        cout<<"Target is Not present"<<endl;
    }
}