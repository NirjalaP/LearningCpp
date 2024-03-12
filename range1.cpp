#include<iostream>
using namespace std;

int main(){
cout<<"Enter a character:"<<endl;

char chr;
cin>>chr;

if(chr>='a' && chr<='z')
cout<<"It is a lower case letter."<<endl;

else if(chr>='A' && chr<='Z')
cout<<"It is a upper case letter."<<endl;

else if(chr>='0' && chr<='9')
cout<<"It is a single digit number."<<endl;

else
cout<<"invalid output"<<endl;
}