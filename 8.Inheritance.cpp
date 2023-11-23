#include<iostream>
using namespace std;
class Square
{
    int n;
public:
    int square(int x)
    {
        n = x;
        return (n*n);
    }
};

class Cube:public Square
{
public:
    int cube(int y)
    {
        return (square(y) * y);
    }
};

int main()
{
    int z;
    Square A;
    Cube B;
    cout<<"Enter a number: ";
    cin>>z;

    cout<<"Square of the number: "<<A.square(z)<<endl;
    cout<<"Cube of the number: "<<B.cube(z)<<endl;
    return 0;
}
