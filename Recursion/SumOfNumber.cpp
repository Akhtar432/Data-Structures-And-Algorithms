//Sum of 1 to N Numbers.
#include<iostream>
using namespace std;
int PrintSum(int n){
    //base case
    if(n == 1){
        return 1;
    }
    //recursive call
    int RecursiveKaAns = PrintSum(n-1);
    //optional processing
    int sum = n + RecursiveKaAns;
    return sum;
}
int main(){
    int n;
    cout<<"Enter Num : ";
    cin>>n;
    PrintSum(n);
    int AllSum = PrintSum(n);
    cout<<"Sum of 1 to "<<n<<" is :"<<AllSum<<endl;
}