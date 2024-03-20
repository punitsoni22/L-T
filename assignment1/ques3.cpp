// 3. Write a program using function overloading:
// To find largest among three integers.
// To find largest among three floating point numbers.

#include<iostream>
using namespace std;

void ini(int a,int b,int c){
    if(a>b && a>c){
        cout<<a<<" is greatest"<<endl;
    }
    else if(b>c && b>c){
        cout<<b<<" is greatest"<<endl;
    }
    else{
        cout<<c<<" is greatest"<<endl;
    }
}
void ini(float a,float b,float c){
    if(a>b && a>c){
        cout<<a<<" is greatest"<<endl;
    }
    else if(b>c && b>c){
        cout<<b<<" is greatest"<<endl;
    }
    else{
        cout<<c<<" is greatest"<<endl;
        
    }
}
int main(){
    int a,b,c;
    cout<<"Enter 3 integer numbers: ";
    cin>>a>>b>>c;
    float x,y,z;
    cout<<"Enter 3 flaot numbers: ";
    cin>>x>>y>>z;

    ini(a,b,c);
    ini(x,y,z);

    return 0;
}