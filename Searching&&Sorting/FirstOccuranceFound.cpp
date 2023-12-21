#include<iostream>
using namespace std;
int findFirstOccurence(int arr[], int n, int target) {
  int s = 0;
  int e = n-1;
  int mid = (s+e)/2;

  //BEST Practice
  //int mid = s +(e-s)/2;
  
  int ans = -1;

  while(s<=e) {
    if(arr[mid]==target) {
      //ans store
      ans = mid;
      //left me jao
      e = mid-1;
    }
    else if(target > arr[mid]) {
      //right me jao
      s = mid+1;
    }
    else if(target < arr[mid]) {
      //left me jao
      e = mid-1;
    }
    //galti yaha krte h hmesha
    mid = (s+e)/2;
  }
  return ans;
}
int main(){
    int arr[]={10,20,30,30,30,60,70,80,90};  //ye ek sorted array hai.
    int n = sizeof(arr);
    int target;
    cout<<"Enter Target Num "<<endl;
    cin>>target;
    int ans = findFirstOccurence(arr, n, target);
    cout<<"First Occurance index is: "<<ans<<endl;
}