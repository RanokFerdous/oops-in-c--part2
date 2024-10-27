#include<bits/stdc++.h>
using namespace std;


//function overriding

// when we use same function multiple time then we can call it function overridding.
// here: function name and parameter are same.


class person
{
public:
    void display()                              //  ALL 3 FUNCTION AND PARAMETER ARE SAME OF THIS CODE.
    {
        cout<<"i am a person"<<endl;
    }
};

class student
{
public:
    void display()
    {
        cout<<"i am a student"<<endl;
    }
};


class teacher
{
public:

    void display()
    {
        cout<<"i am a teacher"<<endl;
    }
};





int main()
{
    person p;
    p.display();

    student s;
    s.display();

    teacher t;
    t.display();


}
