#include<iostream>
using namespace std;
// this is function prototype it must be declared so that compiler knows that we are declaring the function 
void add(int num1,int num2 );
void prod(int num1,int num2);
void sub(int num1,int num2);
void divide(int num1,int num2);
main(){
      int num1;
      int num2;
      cout<<"Enter Number 1 =";
      cin>>num1;
      cout<<"Enter Number 2 =";
      cin>>num2;
      cout<<"enter a operator i.e +-*/ :";
      char op;
      cin>>op;
     if (op == '+')
     {
     add(num1,num2);
      }
}
  void add(int num1, int num2)
 {
  int sum = num1+num2;
  cout<<"the sum of two numbers is="<<sum<<endl;
  }
  void prod(int num1, int num2)
 {
  int product = num1*num2;
  cout<<"the product of two numbers is="<<product<<endl;
 }
  void sub(int num1, int num2)
 {
  int subtraction = num1-num2;
  cout<<"the subtraction of two numbers is="<<subtraction<<endl;
 }
 void divide(int num1, int num2)
 {
  float divide = num1*1/num2;
  cout<<"the division of two numbers is="<<divide<<endl;
 }


