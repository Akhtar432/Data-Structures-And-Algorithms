#include<iostream>
using namespace std;
int main(){
    char ch[100];
    cout<<"Enter Input string: ";
    //cin>>ch; //space or tab milne pr ruk jayega aage ka print nhi karega.
    cin.getline(ch,100); //space or tab milne pr bhi cal jayega or pura string print karega.
    cout<<"Output is: "<<ch<<endl; 

}