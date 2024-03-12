#include<iostream>
using namespace std;

int main(){
    float Eng, Math, Nep, Social, Science;

    cout<<"Enter your marks in Eng, Math, Nep, Social, Science"<<endl;
    cin>>Eng>>Math>>Nep>>Social>>Science;

    // cout<<"Enter your marks in English"<<endl;
    // cin>>Eng;

    // cout<<"Enter your marks in Math"<<endl;
    // cin>>Math;

    // cout<<"Enter your marks in Nepali"<<endl;
    // cin>>Nep;

    // cout<<"Enter your marks in Social"<<endl;
    // cin>>Social;

    // cout<<"Enter your marks in Science"<<endl;
    // cin>>Science;


float total=((Eng+Math+Nep+Social+Science)/500)*100;

if(total>=0 && total<41)
cout<<"fail";

else if(total>=41 && total<51)
cout<<"Third division";

else if(total>=51 && total<61)
cout<<"Second division";

else if(total>=61 && total<71)
cout<<"First division";

else if(total>=1 && total<51)
cout<<"Third division";

   

}