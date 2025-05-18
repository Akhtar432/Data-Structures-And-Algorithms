#include<iostream>
using namespace std;

class A {
private:
    int x;

public:
    A(int _val) : x(_val) {}

    int getX() const {
        return x;
    }

    void setX(int _val) {
        x = _val;
    }
    friend class B;
    friend void printA(const A& a); // Friend function declaration
};

class B {
public:
    void print(const A& a) {
        cout << "Value of x: " << a.getX() << endl;
        cout << a.x << endl; // Accessing private member directly
    }
};

// Friend function
void printA(const A& a) {
    cout << "Value of x: " << a.getX() << endl;
    cout << a.x << endl; // Accessing private member directly
}

int main() {
    A a(10);
    B b;
    
    b.print(a);  
    a.setX(20);
    b.print(a); 
    printA(a); // Accessing private member through friend function

    return 0;
}
