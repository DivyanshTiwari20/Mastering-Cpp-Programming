#include<iostream>
using namespace std;

int main(){
    int age;
    
    cout<<"Tell me ur age:\n ";
    cin>>age;
    if (age<18){
        cout<<"You can't do sex.";
    }
    else if(age==18){
        cout<<"You can't do sex but can masterbate ";
    }
    else{
        cout<<"You can do sex. ";
    }
    return 0 ;
}