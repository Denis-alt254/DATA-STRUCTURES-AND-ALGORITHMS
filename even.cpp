/*
A simple C++ program to check for even or odd
Name: Denis Kipkurui
Adno: BSE-05-0175/2024
*/
#include <iostream>
using namespace std;

bool isEven(int n) { 
  return (n % 2 == 0); 
}

int main() {
    int n;
    cout<<"Enter the value of n = "<<endl;
    cin>>n;
    if(isEven(n))
     	cout << "true";
  	else 
    	cout << "false";

    return 0;
}