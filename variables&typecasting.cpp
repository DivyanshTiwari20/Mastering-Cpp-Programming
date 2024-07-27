#include <iostream>

using namespace std;

int main()
{

    // float a = 34.5f;
    // long double b = 588.6573l;

    // cout << "The size of 34.5 is " << sizeof(34.5) << endl;
    // cout << "The size of 34.5f is " << sizeof(34.5f) << endl;
    // cout << "The size of 34.5F is " << sizeof(34.5F) << endl;
    // cout << "The size of 34.5l is " << sizeof(34.5l) << endl;
    // cout << "The size of 34.5L is " << sizeof(34.5L) << endl; 
    
    // Refrence Variable

    float x= 455 ;
    float & y =x;
    cout <<x<<endl;
    cout <<y<<endl;

    cout<<endl;

    // Typecasting --> Converting one datatype to another

    int a=45;
    float b = 45.46;
    cout<<"The value of a is "<< (float)a<<endl;
    cout<<"The value of a is "<< float(a)<<endl;



    return 0;


}   
    