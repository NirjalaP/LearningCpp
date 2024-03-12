#include<iostream>
using namespace std;

int main(){
    float marks;

    cout<<"Enter your marks:"<<endl;

    cin>>marks;

    if(marks>=0 && marks<40)
    cout<<"You have failed.";

    else if(marks>=40 && marks<56)
    cout<<"Third division";

    else if(marks>=56 && marks<71)
    cout<<"Second division";

    else if(marks>=71 && marks<86)
    cout<<"First division";

    else if(marks>=86 && marks<=100)
    cout<<"Distiction";

    else
    cout<<"Invalid marks";

}