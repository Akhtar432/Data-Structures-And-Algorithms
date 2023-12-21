#include<iostream>
#include<cmath>
using namespace std;
//Division Method
// int DecimalToBinary1(int n){
//     int binarynum = 0;
//     int i=0;
//     while(n>0){
//         int bit = n%2;
//         binarynum = bit*pow(10,i++) + binarynum;
//         n = n/2;
//     }
//     return binarynum;
// }
// int main(){
//     int n;
//     cin>>n;
//     int binary = DecimalToBinary1(n);
//     cout<< binary<<endl;

//     return 0;
// }

//Bitwise Methods
int DecimalToBinary2(int n){
    int binarynum = 0;
    int i=0;
    while(n>0){
        int bit = (n & 1);
        binarynum = bit*pow(10,i++) + binarynum;
        n = n>> 1;
    }
    return binarynum;
}
int main(){
    int n;
    cin>>n;
    int binary = DecimalToBinary2(n);
    cout<< binary<<endl;

    return 0;
}