// Write a program to calculate area of following figures using function overloading:
// Circle
// Rectangle
// Triangle
// Square

#include<iostream>
using namespace std;

void circle(){
    int r;
    cout<<"Enter radius: ";
    cin>>r;
    cout<<"Area of the circle is "<<3.14*r*r<<endl;
}

void rectangle(int a,int b){
    cout<<"area of rectangle is: "<<a*b<<endl;
}
void triangle(int a,int b){
    cout<<"area of rectangle is: "<<a*b/2<<endl;
}
void square(int a){
    cout<<"square of this is: "<<a*a<<endl;
}

int main(){
    int a,b;
    circle();
    cout<<"Enter height and width: ";
    cin>>a>>b;
    rectangle(a,b);
    triangle(a,b);
    square(a);

    return 0;
}