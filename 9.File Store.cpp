#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string name, work, country;
    int id;
    ofstream outfile("C:\\Out.txt");
    cout<<"Enter your name: ";
    getline(cin, name);
    outfile<<"Name: "<<name<<endl;

    cout<<"Enter your occupation: ";
    getline(cin, work);
    outfile<<"Occupation: "<<work<<endl;

    cout<<"Enter your id number: ";
    cin>>id;
    outfile<<"Id: "<<id;
    outfile.close();
    return 0;
}
