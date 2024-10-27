#include<bits/stdc++.h>         //********91_CODE IS BEST AND .
using namespace std;

//   we declare just 1 function  for type of variable like (int a,int b) . (double a, double b) . (float a,float b)....and so on.


//int add(int a,int b)
// double add(double a, double b)

template<class templateName>

templateName add(templateName a,templateName b)
{
    return a+b;
}

//91_no code.

//  for  add(int a,double b)  , add(float a, double b)  this type of function.

//template<class myTemplate1,class myTemplate2>

//myTemplate1 add(myTemplate1 a, myTemplate2 b)
//{
//    return a+b;
//}


int main()
{
    cout<<add(10,20)<<endl;
    cout<<add(30.32,90.74)<<endl;

   // cout<<add(39,32.32)<<endl; can't work . for this we can declare 2 class  template
}




