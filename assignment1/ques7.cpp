// Write a program to find average of array elements.
#include<iostream>
using namespace std;

int avg(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return (sum/n);
}

int main(){
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter element of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<avg(arr,n);

    return 0;
}