#include<iostream>
using namespace std;
int factotial(int n){
    //base Case
    if(n==1 || n==0){
        return 1;
    }
    //Recusive call
    int RecursiveKaAns = factotial(n-1);
    //Processing 
    int fact = n * RecursiveKaAns;
    //Return Factorial Ka Answer
    return fact;
}
int main(){
    int n ;
    cout<<"Enter Number : ";
    cin>>n;
    int ans = factotial(n);
    cout<<"Factorial of "<<n<<" is : "<<ans<<endl;
}