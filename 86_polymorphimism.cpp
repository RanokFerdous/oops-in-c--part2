
                        //=============POLYMORTHISIME==================

  // IT HAS 2 TYPE:
  //1.COMPILE TIME POLYMORTHISIM ->>(IT IS FUNCTIONE OVERLOADDING)
  // 2.RUNTIME POLYMORPHISIM  ->>(FUNCTION OVERRIDDING)



// ************* HERE WE DESRIBE:  HOW TO USE POINTER IN OVERRIDDING


#include<bits/stdc++.h>
using namespace std;

class person
{
public:
  virtual  void display()                 //NOTE:========***********virtual******can be applied for access this function using pointer
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
   //88888888****************IN MAIN FUNCTION WE USE   POINTER
int main(){

    teacher t;  //  teacher *t;  can't be created because ********NOTE: POINTER CAN BE ONLY SUPERCLASS.******
    student s;
    person *p;  // here person is superclass. ********NOTE: POINTER CAN BE ONLY SUPERCLASS.******

    p=&s;

    p->display(); // output: i am a student

    p=&t;

    p->display(); // i am a teacher.




}



