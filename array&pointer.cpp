#include <iostream>
using namespace std;

int main(){

    int marks[]={34,53,53,88};

    // Priting array using For loop.
    cout<<"Printing num inside array using for loop"<<endl;
    for(int i=0; i<4;i++){
        cout<<"The value of marks "<<i<<" is "<< marks[i]<<endl;
    }
        cout<<endl;
       

    // Priting array using while loop.
    cout<<"Printing num inside array using While loop"<<endl;
    int j=0 ;
    while (j<=4 )
    {
       cout<<"The value of marks "<<j<<" is "<< marks[j]<<endl;
       j++;
    }
    cout<<endl;
    
    // Priting array using do-while loop.
    cout<<"Printing num inside array using While loop"<<endl;
    int k=0;
    do
    {
        cout<<"The value of marks "<<k<<" is "<< marks[k]<<endl;
        k++;
    } while (k<4);
    cout<<endl;

    
    //Pointers and arrays
    int* p = marks;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    return 0;
}