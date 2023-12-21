#include<iostream>
using namespace std;
float findAreaofCircle(float radius){
    float area = 3.14 * radius * radius;
    return area;
}
int main(){
    int radius;
    cin>>radius;
    float area = findAreaofCircle(radius);
    cout<<"Area of circle is : "<<area;
}