#include<iostream>
#include<vector>
using namespace std;
void printVectorArray(vector<int>v){
    int size= v.size();
    for(int i=0; i<size; i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>v;
    //insert element in vector arr
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    printVectorArray(v);
}