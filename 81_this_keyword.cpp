#include<bits/stdc++.h>
using namespace std;    //  ******when 2 variable name are same then we use the this->  keyword .

 class student
    {

    public:
        string name;


        student (string name)
        {
            this-> name=name;    //using this-> keyword in this line.
        }

        void display()
        {
            cout<<name<<endl;
        }
    };





}

int main()
{
    student s1("suporna");
    s1.display();
    getch();
}
