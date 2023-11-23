#include<iostream>
using namespace std;
class complex
{
    int real, imag;
public:
    complex(){}
    complex(int x)
    {
        real = x;
        imag = x;
    }
    complex(int x, int y)
    {
        real = x;
        imag = y;
    }
    complex addition(complex);
    void display();
};
void complex::display()
{
    cout<<real<<" + "<<imag<<"j"<<endl;
}
complex complex::addition(complex arg)
{
    complex temp;
    temp.real = real + arg.real;
    temp.imag = imag + arg.imag;
    return temp;
}

int main()
{
    complex A(20,5);
    complex B(15);
    complex C;
    C = A.addition(B);
    cout<<"A = ";
    A.display();
    cout<<"B = ";
    B.display();
    cout<<"A + B = ";
    C.display();
    return 0;
}
