//diogonal matrix o hota h jiska row aur column same ho.
//row aur col same h to ham single loop se kr sakte h
#include<iostream>
using namespace std;
void DiogonalSum(int arr[][3], int row, int col){
    int sum =0;
    for(int i=0; i<row; i++){
        sum = sum + arr[i][i];
    }
    cout<<sum<<endl;

}
int main(){
    int arr[][3]={
                 {1,2,3},
                 {4,5,6},
                 {8,9,0}
                        };
    int row = 3;
    int col = 3;

    DiogonalSum(arr,row,col);

}