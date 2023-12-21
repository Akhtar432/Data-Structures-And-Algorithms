#include<iostream>
using namespace std;
void PrintColWiseSum(int arr[][3], int row, int col){
    for(int i=0; i<col; i++){
        int sum = 0;    // har bar 0 se start krna h isiliye yaha initialise hua h
        for(int j=0; j<row; j++){
            sum = sum + arr[j][i];
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

    PrintColWiseSum(arr,row,col);

}