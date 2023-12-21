#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int* arr[5];
    int* (ptr)[5] = &arr;
}