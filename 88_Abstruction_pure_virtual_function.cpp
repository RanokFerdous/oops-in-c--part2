
// NOTE:
//  ABSTRUCT CLASS: Abstruction is the process of hiding the implementation details and showing only the functionality of the users.
//    example: send message, atm booth, phone call.

// it has virtual function.

/*
//abstruct class :  properties: of abstract class
  1.it must be have *****pure virtual function.********..we must be use this pure virtual fuction in every single class in this code or a programme.
 2. object can't be created.  mobileUser m;  //wrong
 3. pointer * can be created.  mobileUser *m; // right
 4.non-virtual funtion can be used in ABSTRACTION class.
 */

#include <bits/stdc++.h>
using namespace std;

// virtual class declare
class mobileUser // mobileUser is the abstract class here.

{
public:
    // non- virtual function
    void call()
    {
        cout << "hello" << endl;
    }
    // end

    // pure virtual function. if present this ( virtual void sendMessage()=0;  )in any class ,then we can say this is virtual
    //  otherwise not virtual
    virtual void sendMessage() = 0; // 0 means no body. we don't no which operation created in this function.
};

class Rahim : public mobileUser // mobileUser is the abstract class here.

{
public:
    void sendMessage() // we must be call this function  because this is virtual function.
    {
        cout << " Hi, this is Rahim" << endl;
    }
};

class karim : public mobileUser
{
public:
    void sendMessage() // we must be call this function  because this is virtual function.
    {
        cout << "HI! i am karim" << endl;
    }
};

int main()
{
    mobileUser *m; // mobileUser is the abstract class here.
    // can't use object for abstract class.

    Rahim r; // use object here.
    karim k;
    m = &r;
    m->call(); // call the non-virtual function here.

    m->sendMessage();

    m = &k;
    m->sendMessage();
    // getch();
}
