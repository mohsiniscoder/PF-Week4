#include<iostream>
using namespace std;
void even_odd(int num1);
main(){
int num1;
while(true){
cout<<"Enter a Number=";
cin>>num1;
even_odd(num1);
}
}
void even_odd(int num1){

if (num1 % 2 == 0)
{
cout<<"Even\n";
}
if ( num1 % 2 == 1 )
{
cout<<"Odd\n";

}

}
