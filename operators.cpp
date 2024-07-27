#include <iostream>
using namespace std;

int main(){
    
    int a=4,b=5;

    cout<< "Following are the types of operators in c++:"<<endl;
    // Arthmetic operators
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;

    // Assignment Operators --> Used to assign values to variables
    // int a=3, b=9;
    // chat d="A";

    // Comparison Operators
    cout<<"Following are the types of compatison opeators in C++"<<endl;
    cout<<"The vlaue of a==b is "<<(a==b)<<endl;
    cout<<"The vlaue of a!=b is "<<(a!=b)<<endl;
    cout<<"The vlaue of a>=b is "<<(a>=b)<<endl;
    cout<<"The vlaue of a<=b is "<<(a<=b)<<endl;
    cout<<"The vlaue of a>b is "<<(a>b)<<endl;
    cout<<"The vlaue of a<b is "<<(a<b)<<endl;
    cout<<endl;

    // Logical Operators 
    cout<< "Following are the logical operators in C++"<<endl;
    cout<< "The value of (a==b)&&(a<b) logical operator is "<<((a==b)&&(a<b))<<endl;
    cout<< "The value of (a==b)||(a<b) logical operator is "<<((a==b)||(a<b))<<endl;
    cout<< "The value of !((a==b)||(a<b)) is "<<(!(a==b)||(a<b))<<endl;

    return 0;

}
