#include<iostream>
#include<string.h>
using namespace std;
void ReverseOfString(char ch[], int size){
    int s=0, e=size-1;
    while(s<=e){
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
}
int main(){
    char ch[100];
    int size=100;
    //cin>>ch;
    cin.getline(ch,100);
    int len=strlen(ch);
    ReverseOfString(ch,len);
    cout<<ch<<endl;
}