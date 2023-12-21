#include<iostream>
using  namespace std;
int findlength(char ch[], int size){
    int length = 0;
    for(int i=0; i<size; i++){
        if(ch[i]=='\0'){
            //ruk jao
            break;
        }
        else{
            length++;
        }
    }
    return length;
}
int main(){
    char ch[100];
    int size=100;
    //cin>>ch;//space milne pr ruk jayega.
    cin.getline(ch,100);
    int ans = findlength(ch,size);
    cout<<"Length of string is: "<<ans;
}