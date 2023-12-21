//Binary search hamesa monotonic funtion or sorted array pr hi apply hota hai.
#include<iostream>
using namespace std;
int BinarySearch(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    int mid = (start + end)/2;
    while(start <= end){
        if(arr[mid] == target)
        return mid;

        else if(target > arr[mid])
        start = mid + 1;

        else if(target < arr[mid])
        end = mid -1;

        mid = (start + end)/2;
    }
    return -1;
}
int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};  //ye ek sorted array hai.
    int n = sizeof(arr);
    int target;
    cout<<"Enter Target Num "<<endl;
    cin>>target;
    
    int ansIndex = BinarySearch(arr, n, target);
    if(ansIndex == -1)
    cout<<"Element not found"<<endl;
    else cout<<"Element found index is: "<<ansIndex<<endl;

}