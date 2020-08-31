#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;   // default value of static variable is 0 [static = global]
    public:
        void setData(void){
            cout<<"Enter the id : ";
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The id of this employee is : "<<id<<" and this is employee number "<<count<<endl;
        }

        // static function can only run with static variables
        static void getCount(void){
            //cout<<id; *throws an error because id is not a static variable
            cout<<"The value of count is "<<count<<endl;
        }
};

// initialised globally (outside the class)
int Employee :: count;  // Default value is 0

int main()
{
    Employee aman, rohan, minku; // object declaration
    // count is the static data member of Class Employee

    // aman.id = 1;
    // aman.count = 1;  *can't do this as id and count are private 

    aman.setData();
    aman.getData();
    Employee :: getCount(); // static function

    rohan.setData();
    rohan.getData();
    Employee :: getCount();

    minku.setData();
    minku.getData();
    Employee :: getCount();

    return 0;
}