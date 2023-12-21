//print Number 1 to N.
#include<iostream>
using namespace std;
void print(int n){
    //base case
    if(n==1){
        cout<<"1 ";
        return;
    }
    //processing
    cout<<n<<" ";
    //Recursive Call
    print(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<"Enter Num : ";
    print(n);
}