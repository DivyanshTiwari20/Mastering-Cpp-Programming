/*There are three types of loop in cpp
1. for loop
2. while loop
3. do while loop
*/


#include<iostream>
using namespace std;

int main(){

    // FOR LOOP
    for (int i =0; i<10;i++){
        cout<<"Hi diya"<<endl;
    }

    // WHILE LOOP
    int i =0 ;
    while(i<=10){
        cout<<"Fuck u samman!!"<<endl;
        i++;
    }

    // EX OF INFINITE WHILE LOOP
    int j =1 ;
    while(true){
        cout<<j<<endl;
        j++;
    }

    // DO WHILE LOOP :--> it will run the code atleast one time

    int i=1;
    do{
        cout<<i<<endl;
        i++;
    }
    while(false);
    
    return 0 ;
}