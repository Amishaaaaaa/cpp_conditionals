//Q3- Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
//calculate Profit or Loss.
#include<iostream>
using namespace std;

int main(){
    int cp,sp,profit,loss;
    cin>>cp;
    cin>>sp;
    if(cp>sp){
        loss=cp-sp;
        cout<<"loss is: "<<loss<<endl;
    }
    else{
        profit=sp-cp;
        cout<<"profit is: "<<profit<<endl;
    }
    return 0;
}