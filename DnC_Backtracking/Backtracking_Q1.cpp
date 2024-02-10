#include<iostream>
using namespace std;

void printPermtation(string &str, int index){
    //basecase
    if(index >= str.length()){
        cout<<str<<" ";
        return;
    }
    for(int j=index; j<str.length(); j++){
        swap(str[index], str[j]);
        //Recurcive call
        printPermtation(str, index+1);

        //Backtracking
        swap(str[index], str[j]);
    }
}

int main(){
    string str = "abc";
    int index = 0;
    printPermtation(str, index);
}