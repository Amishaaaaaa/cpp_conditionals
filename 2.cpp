//Q2 - Write a program to print absolute value of a number entered by the user.
#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    if(num<0){
        cout<<num*(-1);
    }
    else{
        cout<<num;
    }
    return 0;
}