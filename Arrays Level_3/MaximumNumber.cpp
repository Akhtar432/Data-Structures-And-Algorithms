#include<iostream>
#include<limits.h>
using namespace std;
int FindMaxNum(int arr[][3], int row, int col){
    int MaxAns= INT_MIN;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]>MaxAns){
                MaxAns = arr[i][j];
            }
        }
    }
    return MaxAns;
}
int main(){
int arr[][3]={{1,2,3},{4,5,6},{8,9,0}};
    int row = 3;
    int col = 3;
    int ans = FindMaxNum(arr,row,col);
    cout<<"Maximum Num in Array is: "<<ans<<endl;
}