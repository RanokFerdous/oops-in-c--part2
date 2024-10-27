/*

#include<bits/stdc++.h>
using namespace std;   //function overload: function name same but parameter different.

class overload
{
public:
    void add(int a,int b)
    {
        cout<<a+b<<endl;
    }

    void add(int a,int b,int c)
    {
        cout<<a+b+c<<endl;
    }

    void add()
    {
        cout<<"nothing to add"<<endl;
    }
};
int main(){

    overload obj;
    obj.add();
    obj.add(3,8);
    obj.add(3,3,0);



}
*/
// //function overridding: function name same but parameter same.



#include<bits/stdc++.h>
using namespace std;

class person
{
public:
    void display()
    {
        cout<<"i am a person"<<endl;
    }
};

class student:public person


{
public:
    void display()
    {
        cout<<"i am student"<<endl;
    }
};


class teacher:public person
{
public:
    void display()
    {
        cout<<"I am a teacher"<<endl;
    }
};

int main(){

    student s;
    s.display();

    teacher t;
    t.display();

    person p;
    p.display();





}



















