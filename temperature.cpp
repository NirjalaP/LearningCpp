#include <iostream>
using namespace std;

int main()
{
    // Enter a degree in Farenheit
    double farenheit;
    cout<<"Enter a degree in Farenheit: ";
    cin>> farenheit;

    // Obtain a Celsius degree
    double celsius =(5.0/9)*(farenheit-32);
    return 0;
}