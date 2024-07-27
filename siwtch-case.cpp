#include<iostream>
using namespace std;

int main(){
    cout<<"Enter ur age:\n";
    int age;
    cin>>age;
    switch (age)
    {
    case 18:
    cout<<"You are 18"<<endl;
        break;
    case 20:
    cout<<"You are 20"<<endl;
        break;
    
    default:
    cout<<"Like the repo please"<<endl;
        break;
    }
    return 0;
}