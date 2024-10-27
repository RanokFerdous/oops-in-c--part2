#include<bits/stdc++.h>
using namespace std;                        //======== ENCAPSULATION==============TOPIC.

 class student
 {
 private:           // we can store data in private and protected by using encapsulation concept.
    string name;    // using this method we can access in private value.


 public:
     // setter function for taking input OR SET A NAME OR VALUE
    void setValue(string x)     // don't return anything.
    {
        name=x;
    }

    // getter function for printing the value

    string getValue()
    {
             return name;
    }

 };


int main(){

   student s1;
   s1.setValue("ranok ferdous");
  cout<< s1.getValue()<<endl;

  //getch(); //#include<conio.h>




}
