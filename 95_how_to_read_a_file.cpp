

#include<iostream>  //                             //  read from another file here.
#include<fstream> // for file using.

using namespace std;

int main()
{
    string line; // we read a file  line by line.

    ifstream file("details.txt");

    while(getline(file,line))
    {
        cout<<line<<endl;
    }

    file.close();


}
//OUTPUT:  when we run this code , we get input which i write in file.

