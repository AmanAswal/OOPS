#include <iostream>
using namespace std;

class Employee{
private:
    int a, b, c; // private members

public:
    int d, e;   // public members
    void setData(int a1, int b1, int c1); // Declaration of function
    void getData(){
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
        cout<<"The value of c is: "<<c<<endl;
        cout<<"The value of d is: "<<d<<endl;
        cout<<"The value of e is: "<<e<<endl;
    };
};

// :: = scope resolution
void Employee :: setData(int a1, int b1, int c1){ // function body
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee aman;  // declaration of object named "aman" here
    aman.d = 22; // d and e can be set here because they are public variables
    aman.e = 121;
    aman.setData(1,10,3); // a, b, c can only be set like this because they are private variables
    aman.getData(); 
    return 0;
}

// classes = structures + more
// structures had limitations:
//  - members are only public
//  - No methods
// classes can have methods and properties
// classes can make few members as private or public
// structurs in C++ are typedefed
// you can declare objects along with the class declaration like this:
    // class Employee {
        //class defination
    //}; aman, minku;

// aman.salary = 10 , make no sense if salary is private variabale