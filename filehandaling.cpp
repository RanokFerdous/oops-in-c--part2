/*#include<bits/stdc++.h>
using namespace std;

int main()
{

    //  writing a file.
    /*
    string st="Harry Bhai";

    string s;

    getline( cin,s);


    //openinig file using constructor and writing there.

    // prerequisition : file must be held in this folder.

    ofstream out("sample60.txt"); // write operation

    out<<st; // now go to the sample60.txt file and cheek .

    out<<s;


    */

    /*

    string st2;
    //  read from a file

    //opening files using constructor and reading it

   // ifstream in

   ifstream in( "sample60b.txt");  // read operation from this file.

   //in>>st2;  this read just a word.

   getline( in, st2); // this read whole line .( just 1 st line from the file)

   cout<<st2;

   return 0;


   */

/*
   // topic : read full page from the file .

   string st3;

   ifstream in( "sample60c.txt");


       getline( in,st3);

       cout<<st3;


   return 0;


}
  */

   #include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main() {
    std::ifstream in("sample60c.txt"); // Open the file
    if (!in) {
        std::cerr << "Error: File could not be opened." << std::endl;
        return 1; // Return an error code if the file can't be opened
    }

    std::stringstream buffer; // Create a stringstream to store the file content
    buffer << in.rdbuf(); // Read the entire file content into the buffer

    std::string fileContent = buffer.str(); // Convert the buffer to a string
    std::cout << fileContent << std::endl; // Print the file content

    return 0; // Exit successfully
}






