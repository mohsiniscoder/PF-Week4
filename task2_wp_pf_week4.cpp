#include<iostream>
using namespace std;
void sum(int,int);
int main()
{
int num1,num2;
cout<<"Enter number 1=";
cin>>num1;
cout<<"Enter number 2=";
cin>>num2;
sum(num1,num2);

}


void sum(int num1,int num2) {
int sum = num1+num2;
cout<<"Sum="<<sum;
}



