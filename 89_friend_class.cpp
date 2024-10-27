#include<bits/stdc++.h>
using namespace std;

class A
{
private:
    int id=101;
    string name="ranok";


public:
    friend class B;   //it help to access the private member.
};


class B

{
public:
    void display(A obj)  // class A  and object obj  are called here.
    {
        cout<<obj.id<<endl;
        cout<<obj.name<<endl;
    }
};


int main()
{
    A obj1;
    B obj2;
    obj2.display(obj1); //call display function here.s
}


//output: 101
//          ranok
