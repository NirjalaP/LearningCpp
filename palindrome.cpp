#include<iostream>
using namespace std;

int main(){

int num;
    cout<<"Enter a two digit number:";
    cin>>num;

if(num>=10 && num<=99){
        
    int d1 = num/10;
    int d0 = num%10;

    int rnumber= (d0*10)+(d1*1);

    if(num==rnumber){
    cout<<"it is a palindrome.";
    }
    else
    cout<<"Not palindrome.";
}

 else
 cout<<"invalid input";
 return 0;
}