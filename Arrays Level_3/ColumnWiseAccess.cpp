#include<iostream>
using namespace std;
void Print2DArray(int arr[][3], int row, int col){
    // column wise acess
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            cout<<arr[j][i];
        }
        cout<<endl;
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
    Print2DArray(arr,row,col);                    

    return 0;                    
}