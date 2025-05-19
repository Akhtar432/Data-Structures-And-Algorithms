#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base constructor called" << endl;
    }
    virtual ~Base()
    {
        cout << "Base destructor called" << endl;
    }
};

class Derived : public Base
{
    int *a;
public:
    Derived()
    {
        a = new int[100];
        cout << "Derived constructor called" << endl;
    }
    ~Derived()
    {
        delete[] a;
        cout << "Derived destructor called" << endl;
    }
};

int main()
{
    Base *b = new Derived(); // Base pointer pointing to Derived object
    delete b; // Calls Derived destructor first, then Base destructor
    return 0;
}