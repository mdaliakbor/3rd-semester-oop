#include<iostream>
using namespace std;
class B;
class A
{
    int num1;
public:
    void display()
    {
        cout<<endl<<"Number1 = "<<num1;
    }
    A(int x) {num1 = x;} //constructor
    friend void Swap(A &X,B &Y);
};

class B
{
    int num2;
public:
    void display()
    {
        cout<<endl<<"Number2 = "<<num2;
    }
    B(int y) {num2 = y;} //constructor
    friend void Swap(A &X,B &Y);
};
void Swap(A &X, B &Y)
{
    int temp;
    temp = X.num1;
    X.num1 = Y.num2;
    Y.num2 = temp;
}
int main()
{
    int x,y;
    cout<<"Enter two numbers:"<<endl;
    cin>>x>>y;
    A obj1(x);
    B obj2(y);
    cout<<"Before swapping numbers,";
    obj1.display();
    obj2.display();
    cout<<endl<<"After swapping numbers,";
    Swap(obj1,obj2);
    obj1.display();
    obj2.display();
    return 0;
}
