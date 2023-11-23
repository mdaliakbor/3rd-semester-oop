#include<iostream>
#include<cmath>
using namespace std;
class case3;
class case2;
class case1
{
    int num1;
public:
    case1(int x) {num1=x;} //constructor
    friend int greatest(case1, case2, case3);
};
class case2
{
    int num2;
public:
    case2(int y) {num2=y;} //constructor
    friend int greatest(case1, case2, case3);
};
class case3
{
    int num3;
public:
    case3(int z) {num3=z;} //constructor
    friend int greatest(case1, case2, case3);
};
int greatest(case1 X, case2 Y, case3 Z)
{
    int Max;
    if((X.num1>Y.num2)&&(X.num1>Z.num3))
        Max = X.num1;
    else if(Y.num2>Z.num3)
        Max = Y.num2;
    else
        Max = Z.num3;
    return Max;
}
int main()
{
    int x,y,z,M;
    cout<<"Enter three numbers:"<<endl;
    cin>>x>>y>>z;
    case1 obj1(x);
    case2 obj2(y);
    case3 obj3(z);
    M = greatest(obj1, obj2, obj3);
    cout<<"Greatest of the three numbers is: "<<M;
    return 0;
}
