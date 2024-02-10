#include<iostream>
using namespace std;

void merge(int arr[], int s, int e){
    
}

//step1
void mergeSort(int arr[], int s, int e){
    //base case
    if(s > e){
        //invalid array hone pr
        return;
    }
    if(s == e){
        //single element in array
        return;
    }
    // break karenge
    int mid = (s+e)/2;  // s -> mid -> left part & mid+1 -> e -> right part

    //Step2

    //Recursion ko bulayenge left and right part ko sort krne ke liye
    //Recursion call for left part
    mergeSort(arr, s, mid);

    //Recursive call for right part 
    mergeSort(arr, mid+1, e);

    //Step3

    //Merge 2 sorted Array
    //Ek fun bayenge merge karne ke liye

    merge(arr, s, e);
    
}
int main(){
    int arr[] = {2,4,6,5,1,9};
    int size = 6;
    int s = 0;
    int e = size-1;
    mergeSort(arr,s, e);
}