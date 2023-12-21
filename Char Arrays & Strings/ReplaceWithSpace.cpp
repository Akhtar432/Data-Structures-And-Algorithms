#include<iostream>
#include<string.h>
using namespace std;
void ReplaceWithSpace(char ch[], int n){
    int i=0;
    while(ch[i] !='\0'){
        char currentchar = ch[i];
        if(currentchar == '@'){
            ch[i] = ' ';
        }
        i++;
    }
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    ReplaceWithSpace(ch,100);
    cout<<ch<<endl;
}