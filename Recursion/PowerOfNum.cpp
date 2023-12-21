#include<iostream>
using namespace std;
int pow(int n){
    //base case
    if(n==0){
        return 1;
    }
    //recursive call
    //int recursiveKaAns = 2 * pow(n-1);
    return 2 * pow(n-1);
}
int main(){
    int n;
    cout<<"Enter Power of 2 : ";
    cin>>n;
    int ans = pow(n);
    cout<<" Power of 2 , "<<n<<" is :"<<ans<<endl;
}