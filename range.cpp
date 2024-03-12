#include<iostream>
using namespace std;

int main(){
cout<<"Enter a number:"<<endl;

int num;
cin>>num;

if(num>=0 && num<=10)
cout<<"It is in R1";

else if(num>=11 && num<=20)
cout<<"It is in R2";

else if(num>=21 && num<=30)
cout<<"It is in R3"; 

else if(num>=31 && num<=40)
cout<<"It is in R4";

else if(num>=41 && num<=50)
cout<<"It is in R5";

else if(num>=51 && num<=60)
cout<<"It is in R6";

else if(num>=61 && num<=70)
cout<<"It is in R7";

else if(num>=71 && num<=80)
cout<<"It is in R8";

else if(num>=81 && num<=90)
cout<<"It is in R9";

else if(num>=91 && num<=100)
cout<<"It is in R10";

else
cout<<"It is not in the range.";

}