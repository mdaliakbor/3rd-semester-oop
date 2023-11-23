#include<iostream>
using namespace std;
class student
{
    string name;
    char section;
    int semester, roll, marks[5], total=0;
public:
    void get_data();
    void display();
};
void student::get_data()
{
    cout<<"Enter student name: ";
    getline(cin, name);
    cout<<"Enter semester: ";
    cin>>semester;
    cout<<"Enter roll number: ";
    cin>>roll;
    cout<<"Enter section: ";
    cin>>section;
    cout<<"Enter marks in five subjects: ";
    for(int i=0; i<5; i++)
        cin>>marks[i];
    for(int i=0; i<5; i++)
        total += marks[i];
}
void student::display()
{
    cout<<endl<<"Student name: "<<name<<endl;
    cout<<"Semester: "<<semester<<endl;
    cout<<"Roll: "<<roll<<endl;
    cout<<"Section: "<<section<<endl;
    cout<<"Total marks: "<<total<<endl;
}
int main()
{
    student A;
    A.get_data();
    A.display();
    return 0;
}
