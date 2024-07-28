#include <iostream>
using namespace std;


    struct employee
    {
        /* data */
        int Id;
        char favchar;
        float salary;
    };

    union money
    {
        /* data */
        int rice;
        char car;
        float pounds;
    };
    
    int main(){

        enum Meal {breakfast, lucnch,dinner};
        Meal m2 =dinner;
        cout<<(m2==2);
        cout<<endl;

        union money m1;
        m1.rice =34;
        m1.car= 'c';
        cout<<m1.car;
        cout<<endl;
        cout<<endl;

        struct employee harry;
        struct employee samman;
        struct employee Diya;
        harry.Id=1;
        harry.favchar='c';
        harry.salary=12400;

        cout<<"The value is "<<harry.Id<<endl;
        cout<<"The value is "<<harry.favchar<<endl;
        cout<<"The value is "<<harry.salary<<endl;

    return 0;
    }
    
