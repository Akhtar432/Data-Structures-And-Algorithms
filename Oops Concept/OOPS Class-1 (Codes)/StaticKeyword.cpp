#include<iostream>
using  namespace std;

class abc{
    public:
    static int x, y;
    void print() const
    {
        cout<<this->x<<" "<<this->y<<endl; 
    }
};
int main(){
    abc obj1;
    abc obj2;
    obj1.print();
    obj2.print();

    return 0;
}