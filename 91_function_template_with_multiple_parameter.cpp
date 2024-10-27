

#include<bits/stdc++.h>
using namespace std;

//  for  add(int a,double b)  , add(float a, double b) , add(int a, int b) , this type of function.

template<class myTemplate1,class myTemplate2>

myTemplate1 add(myTemplate1 a, myTemplate2 b)
{
    return a+b;
}


int main()
{
    cout<<add(10,20)<<endl;
    cout<<add(30.32,90.74)<<endl;

   // cout<<add(39,32.32)<<endl; can't work . for this we can declare 2 class  template
}

