#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int x1, y1, x2, y2;

cout<<"Enter value of x1""\n";
cin>>x1;

cout<<"Enter value of y1""\n";
cin>>y1;

cout<<"Enter value of x2""\n";
cin>>x2;

cout<<"Enter value of y2""\n";
cin>>y2;

float d=pow(pow((x2-x1),2)+ pow((y2-y1),2),0.5);
cout<<"The calculated distance is "<<d;

return 0;
}