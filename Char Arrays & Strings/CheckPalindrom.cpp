#include<iostream>
#include<string.h>
using namespace std;
bool checkPalindrom(char ch[], int n){
    int i=0; 
    int j=n-1;
    while(i<=j){
        if(ch[i] == ch[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    char ch[100];
    cin>>ch;
    int n = strlen(ch);
    bool ans = checkPalindrom(ch,n);
    if(ans == 1){
        cout<<"This is palindrom: "<<ch;
    }
    else{
        cout<<"This is not palindrom: "<<ch;
    }
}