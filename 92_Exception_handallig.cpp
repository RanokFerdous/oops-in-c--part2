/* exception handaling
Error is 2 type:
1. compile time error: example:  ; miss, { miss ,
2.runtime error: programme running time error.

FOR HANDALING THIS TYPE OF ERROR: WE USE
1.try 2.catch 3.throw

*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    while(1)
    {


  try  {                                   //   *********EXCEPTION PART STORED IN try keyword.
        int num1,num2;

        cout<<"Enter 1st number"<<endl;
        cin>>num1;
        cout<<"Enter 2nd nuber"<<endl;
        cin>>num2;


    //throw  use

    if(num2==0)  // this is exception part  . exception part throw to the catch(...) function .
    {
        throw -1;
    }

    double result =double(num1)/num2;

    cout<<"Result="<<result<<endl;
}
    catch (...)  // we can use catch(int x) for integer but (...) can all work.
    {
        cout<<"divided by zero is not possible"<<endl;
        cout<<"try again"<<endl;
    }

}
}


//NOTE: WE CAN USE 1 AND MORE catch(...)  function in a programme.
