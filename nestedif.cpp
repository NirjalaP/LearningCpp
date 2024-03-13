#include<iostream>
using namespace std;

int main(){
cout<<"Enter a number:"<<endl;

int floor, room;
cout<<"Enter a floor number:"<<endl;
cout<<"Enter a room number:"<<endl;
cin>>floor>>room;

if(floor==0){
    if(room==1)
    cout<<"Welcome to Administrator's Office.";

    else if(room==2)
    cout<<"Welcome to Manager's Office.";

    else
    cout<<"Invalid input";
}

else if(floor==1){
    if(room==1)
    cout<<"Welcome to English class.";

    else if(room==2)
    cout<<"Welcome to Maths class.";

    else
    cout<<"Invalid input";
}
else if(floor==2){
    if(room==1)
    cout<<"Welcome to Physics lab.";

    else if(room==2)
    cout<<"Welcome to Chemistry lab.";

    else
    cout<<"Invalid input";
}
else if(floor==3){
    if(room==1)
    cout<<"Welcome to Botany lab.";

    else if(room==2)
    cout<<"Welcome to Zoology lab.";

    else
    cout<<"Invalid input";
}
else if(floor==4){
    if(room==1)
    cout<<"Welcome to Art class.";

    else if(room==2)
    cout<<"Welcome to Dance class.";

    else
    cout<<"Invalid input";
}
else 
if(floor==5){
    if(room==1)
    cout<<"Welcome to Storage.";

    else if(room==2)
    cout<<"Welcome to Kitchen.";

    else
    cout<<"Invalid input";
}

else
cout<<"Invalid Input";


}