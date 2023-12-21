#include<iostream>
#include<limits.h>
using namespace std;
int FindMinNum(int arr[][3],int row, int col){
    int MiniAns = INT_MAX;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]<MiniAns){
                MiniAns=arr[i][j];
            }
        }
    }
    return MiniAns;
}

int main(){
    int arr[][3]={{1,2,3},{4,5,6},{8,9,-23}};
    int row = 3;
    int col = 3;
    int ans = FindMinNum(arr,row,col);
    cout<<"Manimum Num in Array is: "<<ans<<endl;
}