#include<iostream>
using namespace std;

int main(){
cout<<"Enter a number:"<<endl;

int num;
cin>>num;

if (num %2==0)
cout<<"The number is even."<<endl;

else
cout<<"The number is odd."<<endl;
}

// if we use curly bracket on else 2nd cout only show when odd, if not even in even 2nd line will print out.
// else{
//     cout<<"The number is odd."<<endl;
//     cout<<"I do not belog here"<<endl;
// }
// }
