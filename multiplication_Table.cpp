/*
A program to print the multiplication table of a number entered
Name: Denis Kipkurui
Adno: BSE-05-0175/2024
Date: 25/5/2025
*/

#include <iostream>

using namespace std;

int multiply(){
    int n,i;
    for (n = 0; n <= 10; n++){
        for (i = 0; i <= 10; i++){
            cout<<n*(i)<<endl;
        }
    }
    
}

int main(){
    cout<<"Multiplication table"<<endl;
    multiply();
    return 0;
}