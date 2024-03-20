// . Write a program to convert time to minutes using functions. (input 3 variables namely hours, minutes and seconds. Convert everything into minutes.)

#include<iostream>
using namespace std;

int main(){
    int h,m,s;
    cout<<"Enter hours,mint and seconds: ";
    cin>>h>>m>>s;
    float min;
    min = (h*60)+(m)+(s/60);
    cout<<"total mint is : "<<min;

    return 0;
}