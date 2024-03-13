#include<iostream>
using namespace std;

int main(){

    int year;
    cout<<"Enter a year:"<<endl;
    cin>>year;

    // if(year%100==0){

   
    //   if (year%400==0)
    //     cout<<"It is a leap year.";}
    
    // else
    //     if(year%4==0)
    //     cout<<"It is a leap year.";

    //     else
    //     cout<<"It is not a leap year.";

    if ((year%400==0) || (year%100!=0 && year %4==0)){
         cout<<"It is  a leap year.";
    }
   

else{
       cout<<"It is not a leap year.";
 
} 

}