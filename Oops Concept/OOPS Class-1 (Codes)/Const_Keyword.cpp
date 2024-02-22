#include<iostream>
using namespace std;

class abc{
    int x;
    int *y;

    public:
    abc(){
        x = 0;
        y = new int(0);
    }
};

int main(){

    return 0;
}

 int main2(){
//     int x = 5; // x is const keyword
    //initialization can be done
    // but we cant re-assign a value
    // x = 10;
    // cout<<x<<endl;

    //2. const with pointer
    // const int *a = new int (2); //CONST data, NON-COST pointer
    // int const *a = new int (2); // same line no.12
    // cout<< *a <<endl;
    // //*a = 20;
    // cout<< *a <<endl;
    // int b = 20;
    // a = &b; //pointer itself can reassinged.
    // cout<< *a <<endl;

    //CONST pointer , but NON-CONST data.
    // int *const a = new int (2);
    // cout<< *a << endl;
    // *a = 20;
    // cout<< *a << endl;
    // int b = 50;
    // //a = &b; // nahi chalega , const pointer.

    //CONST pointer, CONST data.
    // const int *const a = new int(10);
    // cout<< *a <<endl;
    // // *a = 50;  //nahi chalega kyunki dono const hai.
    // // int b = 50;
    // // a = &b;

    return 0;
}