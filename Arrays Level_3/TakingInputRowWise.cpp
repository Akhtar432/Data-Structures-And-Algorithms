#include<iostream>
using namespace std;
 //print array
void printArray(int arr[][3], int row, int col){
    cout<<"Print Arrays"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
//taking input Row wise
int main(){
    int arr[3][3];
    int row=3;
    int col=3;
    cout<<"Enter input"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    printArray(arr,row,col);
}