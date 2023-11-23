#include<iostream>
using namespace std;
class num
{
    int n, f;
public:
    num(int);
    void fact();
};
num::num(int x)
{
    n = x;
    f = 1;
}
void num::fact()
{
    for(int i=2; i<=n; i++)
        f = f*i;
    cout<<"Factorial is: "<<f;
}
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    num a(x);
    a.fact();
    return 0;
}
