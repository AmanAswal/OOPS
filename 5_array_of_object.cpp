#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
public:
    void setId(void){
        salary = 122;
        cout<<"Enter id of Employee : ";
        cin>>id;
    }
    void getId(void){
        cout<<"The id of this Employee is "<<id<<endl;
    }
};

int main()
{
    // Employee aman, minku, harry, shruti;
    // harry.setId();
    // harry.getId();
    int noOfEmployees;
    cout<<"Enter the size of company: "; cin>>noOfEmployees;
    Employee fb[noOfEmployees];
    int n = sizeof(fb)/sizeof(fb[0]);

    for(int i=0; i<n; i++){
        fb[i].setId();
        fb[i].getId();
    }

   

    return 0;
}