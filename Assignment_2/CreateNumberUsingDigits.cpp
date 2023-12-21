#include<iostream>
using namespace std;
int CreateNumberUsingDigits(int numberofDigit){
    int num = 0;
    for(int i=0; i<numberofDigit; i++){
        int digit ;
        cin>>digit;
        num = num * 10 + digit;
    }
    return num;
}
int main(){
    int numberofDigits;
    cin>>numberofDigits;
    int num = CreateNumberUsingDigits(numberofDigits);
    cout<<"Number created by digits "<<num<<endl;
}