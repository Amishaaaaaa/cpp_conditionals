//Q1 - Write a program which takes the values of length and breadth from user and check if it is
//a square or not.
#include<iostream>
using namespace std;

int main(){
    int length, breadth;
    cin>>length;
    cin>>breadth;
    if(length==breadth){
        cout<<"Square";
    }
    else{
        cout<<"Not a square";
    }
    return 0;
}