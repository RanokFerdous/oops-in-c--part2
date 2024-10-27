#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    string name;

    // ofstream used for = file write

    ofstream file; // ofstream fileName;

    //file.open("student1.txt");

    //******if we want to added new line or new word continuously without delete the previous value
    // the we use  file.open("student.txt", ios::out | ios::app);

    file.open("student.txt", ios::out | ios::app);

    cout<<"Enter your name: ";
    getline(cin,name);

    //cout  replace file
    file<<"welcome "<<name<<endl; // take input for file

    file.close();
    cout<<"Data is stored"<<endl;
    return 0;




}
