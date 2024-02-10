#include<iostream>
using namespace std;
bool chekShorted(int arr[], int size, int index){
    if(index >= size){
        return true;
    }
    else if(arr[index] > arr[index-1]){
        bool aageKaAns = chekShorted(arr,size,index+1);
            return aageKaAns;
    }
    else{
        return false;
    }
}
int main(){
    int arr[]= {10,20,30,40,50};
    int size = 5;
    int index = 1;
    bool  isShorted = chekShorted(arr,size,index);
    if(isShorted){
        cout<<"Shorted Array"<<endl;
    }
    else{
        cout<<"Not Shorted"<<endl;
    }
}