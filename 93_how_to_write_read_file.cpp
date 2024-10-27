#include<bits/stdc++.h>
using namespace std;

// how to write and create a file

//cin and cout  require for <iostream>

// <fstream>  == to read and write into a file we need this library function

// ofstream == is a data type . used to create and write information to file.

// ifstream  == read information from files.


#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file; // ofstream is a data type . for create and write file.

    file.open ("student.txt");  //open file

    file<<"I am ANISUL ISLAME. I AM 28 YEARS OLD"<<endl;  //  file replace to  cout  . *********this part store in file.

    file.close();   //close file.
    return 0;




}
