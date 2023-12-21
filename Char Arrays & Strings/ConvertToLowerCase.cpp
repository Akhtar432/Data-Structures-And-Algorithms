#include<iostream>
#include<string.h>
using namespace std;
void convertUpperToLowerCase(char ch[], int n){
  int index = 0;
  while(ch[index] != '\0') {
    //check if UPPER, then convert to LOWER case
    if(ch[index] >= 'A' && ch[index] <='Z') {
      ch[index] = ch[index] - 'A' + 'a';
    }
    index++;
  }
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    convertUpperToLowerCase(ch,100);
    cout<<ch<<endl;
}