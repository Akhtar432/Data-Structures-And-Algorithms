#include<iostream>
using namespace std;
int countSetBits(int n){
    int count = 0;

    // divide method
    
    // while(n>0){
    //     int bit = n%2;
    //     if(bit==1){
    //         count++;
    //     }
    //     n = n/2;
    // }

    //bitwise method

    while(n > 0){
        int bit = (n&1);
        if(bit == 1){
            count++;
        }
        n = n >> 1; //right shift by 1
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int count = countSetBits(n);
    cout<<count<<endl;
}