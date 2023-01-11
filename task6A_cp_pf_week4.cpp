#include<iostream>
using namespace std;
void bill(string day,float amount);
int main(){

 bill("sunday",15000);
 return 0;
 }
void bill(string day,float amount)
{
if(day == "sunday")
{
float final_amount = amount -  (amount * 0.10) ;
cout<<"The total payable amount is="<<final_amount<<endl;  
}
if (day != "sunday")
{
 cout<<"bill is="<<amount<<endl;

}

}