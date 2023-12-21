#include<iostream>
using namespace std;
void printAllDigits(int n){
    while(n){
        int onesPlaceDigit = n % 10;
        cout<<"Digit "<<onesPlaceDigit<<endl;
        n = n / 10;
    }
}
int main(){
    int integer;
    cin>>integer;
    printAllDigits(integer);
}