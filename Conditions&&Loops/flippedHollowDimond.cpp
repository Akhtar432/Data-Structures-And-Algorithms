#include<iostream>
using namespace std;
int main(){
    int num;
    int n= num/2;
    cin>>n;
    for(int row=0; row<n; row++){
        // for inverted pyramid
        for(int col=0; col<n-row; col++){
            cout<<"*";
        }

        // for full pyramid space
        for(int col=0; col<2*row+1;col++){
            cout<<" ";
        }

        //for inverted pyramid
        for(int col=0; col<n-row; col++){
            cout<<"*";
        }
        cout<<endl;
    }
     for(int row=0; row<n; row++){
        // for inverted pyramid
        for(int col=0; col<row+1; col++){
            cout<<"*";
        }

        // for full pyramid space
        for(int col=0; col<2*n-2*row-1;col++){
            cout<<" ";
        }

        //for inverted pyramid
        for(int col=0; col<row+1; col++){
            cout<<"*";
        }
        cout<<endl;
    }
}