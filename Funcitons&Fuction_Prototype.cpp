#include <iostream>
using namespace std;

//Funciton prototype
// type function-name(arguments);
// int sum(int a,b); --> ACCEPTABLE
// int sum(int ,int); --> NOT-ACCEPTABLE
int sum(int a,int b);

int main(){
    int num1 , num2;
    cout<<"Enter your number:\n";
    cin>>num1;
    
    cout<<"Enter your second number:\n";
    cin>>num2;
    
    // Here the num1 and num2 are actual parameters.
    cout<<"The sum of two numbers is: \n"<<sum(num1,num2)<<endl;
    return 0;
}

// Here the a and b are formal parameters they take there value from actual parameters.
int sum(int a, int b){
    int c=a+b;
    return c;
}


// Q/A:

/*
Q. What are Function prototype?
A. Function prototype tells the compiler that if you haven't find the function that used in main() function yet still continue searching it is in the code.
*/