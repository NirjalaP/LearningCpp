#include<iostream>

using namespace std;
 int main(){
    int days;

    cout<<"Enter the nummbe of days: "<<endl;
    cin>>days;

    int year, rdays, month, mdays;
    year= days/365;
    rdays= days%365;
    month= days/30;
    mdays= rdays%30;

    cout<<year<<" Year And "<<rdays<<" days"<<endl;
    return 0;

 }