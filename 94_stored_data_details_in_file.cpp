#include<iostream>
#include<string>
#include<fstream>  // for using file

using namespace std;


int main()
{
    string name;
    int age;
    ofstream file;  // take file name input;

    file.open ("student details.txt", ios::out|ios::app);

    for(int i=0;i<3;i++)

    {
        cout<<"Enter your name: "<<endl;
      //  cin>>name;

      getline(cin,name);

        file<<"name is "<<name<<endl;

        cout<<"Enter yout age: "<<endl;

        cin>>age;

        file<<"Age is = "<<age<<endl;

        cin.ignore(); //used for take input multiple time without error
    }

    file.close();

    return 0;
}
