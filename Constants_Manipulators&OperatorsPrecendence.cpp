// U CAN'T CHANGE THE CONST IN CPP
// OPERATOR PRECEDENCE MEANS WITH OPERATOR WILL GET THE HIGHER PREFRENCE
// U CAN VISIT THE BELOW SITE TO KNOW ABOUT THE OPERATOR PRECEDENCE

// https://en.cppreference.com/w/cpp/language/operator_precedence


#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    
    int a=3,b=56,c=485;
    cout<<"The value of a is :"<<a<<endl;
    cout<<"The value of b is :"<<b<<endl;
    cout<<"The value of c is :"<<c<<endl;
    cout<<endl;

    //  Below are the examples of Manupulators.
    cout<<"The value of a is with setw:"<<setw(4)<<a<<endl;
    cout<<"The value of b is with setw:"<<setw(4)<<b<<endl;
    cout<<"The value of c is with setw:"<<setw(4)<<c<<endl;
    return 0;
}