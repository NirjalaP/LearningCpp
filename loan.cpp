#include<iostream>
using namespace std;

int main(){
    int amount;

    cout<<"Enter your desired loan amount:"<<endl;
    cin>>amount;

    if(amount>=10000 && amount<=200000)
    cout<<"Loan will be provided with the interest rate of 0.1% Per annum"<<endl;

    else if(amount>200000 && amount<=500000)
    cout<<"Loan will be provided with the interest rate of 0.5% Per annum"<<endl;

    else if(amount>500000 && amount<=1000000)
    cout<<"Loan will be provided with the interest rate of 0.7% Per annum"<<endl;

    else if(amount<10000 || amount>1000000)
    cout<<"The loan amount should be within the range of 10,000 to 10,00,000."<<endl;

    else
    cout<<"Invalid Input";
}