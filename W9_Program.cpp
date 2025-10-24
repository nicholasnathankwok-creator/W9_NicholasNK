#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double y1, double x2, double y2){
    double d = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    return d;
}
double radius(double xCenter, double yCenter, double xPoint, double yPoint){
    return distance(xCenter, yCenter, xPoint, yPoint);
}
double circumference(double r){
    double c = 3.1416 * r * 2;
    return c;
}
double area(double r){
    double a = 3.1416 * r * r;
    return a;
}
int main()
{
    double xCenter, yCenter, xPoint, yPoint;
    
    cout<<"Enter the center of the circle: "<<endl;
    cout<<"X: ";
    cin>>xCenter;
    cout<<"Y: ";
    cin>>yCenter;
    cout<<"Enter a point: "<<endl;
    cout<<"X: ";
    cin>>xPoint;
    cout<<"Y: ";
    cin>>yPoint;
    
    double r = radius(xCenter,yCenter,xPoint,yPoint);
    double d = r*2;
    double c = circumference(r);
    double a = area(r);
    
    cout<<"\nCircle Properties:\n";
    cout<<"Radius = "<<r<<endl;
    cout<<"Diameter = "<<d<<endl;
    cout<<"Circumference = "<<c<<endl;
    cout<<"Area = "<<a<<endl;

    return 0;
}