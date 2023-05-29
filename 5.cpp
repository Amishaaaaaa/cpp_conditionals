//Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication
//and division.

#include<iostream>
using namespace std;

int main(){
    char op;
    int num1,num2;
    cin>>op;
    cin>>num1;
    cin>>num2;
    switch(op){
        case '+':
            cout<<num1+num2;
            break;
        case '-':
            cout<<num1-num2;
            break;
        case '*':
            cout<<num1*num2;
            break;
        case '/':
            cout<<num1/num2;
            break;
    }
    return 0;
}