#include<iostream>
using namespace std;
bool checkEvenOrOdd(int n){
    //for bitwise method last me 0 ho even and 1 ho to odd hoga
    if(/*n%2==0*/ (n&1)==0){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    bool ans = checkEvenOrOdd(n);
    if(ans==1){
        cout<<n<<" is even number.\n";
    }
    else{
        cout<<n<<" is odd number.\n";
    }
}