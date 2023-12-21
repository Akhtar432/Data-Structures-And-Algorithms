#include<iostream>
using namespace std;
void PrintRowSum(int arr[][3], int row, int col){
    for(int i=0; i<row; i++){
        int sum = 0;    // har bar 0 se start krna h isiliye yaha initialise hua h
        for(int j=0; j<col; j++){
            sum = sum + arr[i][j];
        }
        cout<<sum<<endl;
    }
}
int main(){
    int arr[][3]={
                 {1,2,3},
                 {4,5,6},
                 {8,9,0}
                        };
    int row = 3;
    int col = 3;

    PrintRowSum(arr,row,col);

}