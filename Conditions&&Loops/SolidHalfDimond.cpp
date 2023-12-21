#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0; row<2*n-1; row++){
        int condition=0;
        if(row<n){
            condition=row;
         }
        else{
            condition = n- (row%n) -2;
         }
    for(int col=0; col<=condition; col++){
           cout<<"*";
        }
        cout<<endl;
    }
}