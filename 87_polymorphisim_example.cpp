
#include<bits/stdc++.h>     //prACTISE CODE FOR POLYMORPHISIM IN C++.
#include<conio.h>           //
#include<iostream>
using namespace std;

class shape
{
public:

    double dim1,dim2;

    //constructor
    shape(double dim1,double dim2)
    {
        this-> dim1=dim1;
        this-> dim2=dim2;
    }

    virtual double area()  // if we need access we can be use the virtual keyword
    {
        return 0;
    }
};


class triangle:public shape
{
    // already dim1,dim2 come here.
    public:

    //take input
    triangle (double dim1,double dim2)
    :shape(dim1,dim2)
    {
        //this->dim1=dim1;
        //this->dim2=dim2;
    }

   //output;

   double area()
   {
       return .5*dim1*dim2;
   }



};


class rectangle: public shape
{
    public:
    rectangle (double dim1,double dim2)
    : shape(dim1,dim2)
    {

    }

    double area()
    {
        return dim2*dim1;
    }

};


int main()
{

    shape *p;  //only super class can create  this.

  triangle t(10,20); //subclass object

    rectangle r(20,30);

   p=&t;  // p address the triangle

   cout<<"The area of the triangle is: "<< p ->area()<<endl;  // we need to use :  selector operator .

    p=&r;

    cout<<"The area of the rectangle is :"<<  p->area()<<endl;



}


























