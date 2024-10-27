#include<bits/stdc++.h>
using namespace std;

class person         //-----------name age and id are called automatically in class----------// .
{
public:
    string name;
    int age;


    void display1()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;

    }

};


class student: public person   //  student class inheritance the person class here.
{
public:
    // name,age, display1() are coming in this sector
    int id;

    void display2()
    {
        cout<<"id : "<<id<<endl;
        display1();
    }


};


int main()
{
    student s1;
    s1.id=3;
    s1.name="ranok ferdous";
    s1.age=23;


    s1.display2();

}








