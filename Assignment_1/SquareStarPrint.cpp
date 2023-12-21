#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i=0; i<num; i=i+1){
        for(int j=0; j<num; j=j+1){
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}