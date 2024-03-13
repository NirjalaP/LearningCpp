#include<iostream>
using namespace std;

int main(){

int num;
    cout<<"Enter a two digit number:";
    cin>>num;

    if(num>=10 && num<=99)
        {
        int a = num/10;
        int b = num%10;

        if(a%b==0)
        cout<<"perfectly divisible";

        else
        cout<<"not divisible";
        }

    else
    cout<<"Invalid input";
    
return 0;
}