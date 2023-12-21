#include<iostream>
#include<string.h>
using namespace std;
bool checkPalindrom(char ch[], int start, int end){
    while(start <= end){
        if(ch[start] == ch[end]){
            start++;
            end--;
        }
        else{
            return false;
        }
    }
    return true;
}
bool checkPalindrom2(char ch[], int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        if(ch[start] == ch[end]){
            start++;
            end--;
        }
        else{
            //one removal allowed h
            //pahle start wale index ko remove kr ke dekhte h 
            bool ans1 = checkPalindrom(ch , start+1, end);
            //second end wale ko remove kr ke dekhte h
            bool ans2 = checkPalindrom(ch , start, end-1);

            //ans1 or ans2 me koi ek bhi sahi ho
            return ans1 || ans2;
        }
    }
    return true;
}
int main(){
    char ch[100];
    cin>>ch;
    int n = strlen(ch);
    bool ans = checkPalindrom2(ch,n);
    if(ans == 1){
        cout<<"This is palindrom after 0 or 1 Removal: "<<ch;
    }
    else{
        cout<<"This is not palindrom: "<<ch;
    }
}