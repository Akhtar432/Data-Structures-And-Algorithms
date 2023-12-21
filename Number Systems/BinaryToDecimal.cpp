#include<iostream>
#include<cmath>
using namespace std;
int BinaryToDecimal(int n){
    int decimalnum = 0;
    int i = 0;
    while(n){
        int bit = n%10;
        decimalnum = decimalnum +bit * pow(2 , i) , i++;
        n = n/10;
    }
    return decimalnum;
}
int main(){
    int n;
    cin>>n;
    int Decimal = BinaryToDecimal(n);
    cout<<Decimal;

    return 0;
}