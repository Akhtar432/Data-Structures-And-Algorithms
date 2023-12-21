//---> Binary search Method.
#include<iostream>
#include <algorithm>
#include<limits.h>
#include<vector>
using  namespace std;
int findMaxiNum(vector<int>&nums,int size){
    int n = nums.size();
    //sort (nums.begin(), nums.begin()); 
    int s=0 , e=n-1;
    int max = INT_MIN;
    int mid = (s+e)/2;
    while(s<=e){
        mid = (s+e)/2;
        if(nums[mid] < max){
            e = mid -1;
        } 
        else if(nums[mid] > max){
            s=mid+1;
        }
        mid = (s+e)/2;
    }
    return nums[mid];
}
int main(){
    vector<int> nums;
    nums.push_back(10);
    nums.push_back(20); 
    nums.push_back(30); 
    nums.push_back(40);  
    nums.push_back(50);
    // for(int i=0; i<nums.size(); i++){
    //     cout<<nums[i]<<" ";
    // }
    int size = nums.size();
    int ans = findMaxiNum(nums,size);
    cout<<"Maxi Num is: "<<ans<<endl;
}