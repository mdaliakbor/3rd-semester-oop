#include<iostream>
#include<cmath>
using namespace std;
class shape
{
    float a,b,c,radius,base,height;
public:
    float Area(float);
    float Area(float, float);
    float Area(float, float, float);
};
float shape::Area(float r)
{
    radius = r;
    return (3.1416*radius*radius);
}
float shape::Area(float b, float h)
{
    base = b;
    height = h;
    return (base*height);
}
float shape::Area(float x, float y, float z)
{
    float s;
    a = x;
    b = y;
    c = z;
    s = (a+b+c)/2;
    return (sqrt(s*(s-a)*(s-b)*(s-c)));
}
int main()
{
    float area, r, b, h, x, y, z;
    shape circle, triangle, rectangle;

    cout<<"Enter radius of a circle:"<<endl;
    cin>>r;
    cout<<"Area of circle: "<<circle.Area(r)<<"\n\n";

    cout<<"Enter base and height of a rectangle:"<<endl;
    cin>>b>>h;
    cout<<"Area of rectangle: "<<rectangle.Area(b,h)<<"\n\n";

    cout<<"Enter three sides of a triangle: "<<endl;
    cin>>x>>y>>z;
    cout<<"Area of triangle: "<<triangle.Area(x,y,z)<<endl;
    return 0;
}
