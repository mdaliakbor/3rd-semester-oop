#include<iostream>
using namespace std;
class Time
{
    int seconds, minutes, hours;
public:
    Time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    Time(int x, int y, int z)
    {
        hours = x;
        minutes = y;
        seconds = z;
    }
    friend Time operator+(Time, Time);
    void Display();
};
void Time::Display()
{
    cout<<"Hour(s): "<<hours<<endl;
    cout<<"Minute(s): "<<minutes<<endl;
    cout<<"Second(s): "<<seconds<<endl;
}
Time operator+(Time A, Time B)
{
    Time C;
    C.seconds = A.seconds + B.seconds;
    if(C.seconds>=60)
    {
        C.minutes = C.seconds/60;
        C.seconds = C.seconds%60;
    }
    C.minutes = A.minutes + B.minutes + C.minutes;
    if(C.minutes>=60)
    {
        C.hours = C.minutes/60;
        C.minutes = C.minutes%60;
    }
    C.hours = A.hours + B.hours + C.hours;
    return C;
}
int main()
{
    int x,y,z;
    cout<<"Enter hours, minutes and seconds for Time1: "<<endl;
    cin>>x>>y>>z;
    Time A(x,y,z);
    cout<<"Enter hours, minutes and seconds for Time2: "<<endl;
    cin>>x>>y>>z;
    Time B(x,y,z);
    Time C;

    cout<<"Time1 = "<<endl;
    A.Display();
    cout<<endl<<"Time2 = "<<endl;
    B.Display();
    cout<<endl<<"Adding two time objects..."<<endl;
    C = A + B;
    cout<<endl<<"Time1 + Time2 = "<<endl;
    C.Display();
    return 0;
}
