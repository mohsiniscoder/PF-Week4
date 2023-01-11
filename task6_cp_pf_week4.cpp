#include<iostream>
using namespace std;
void bill(string day,float amount);
main(){
float amount;
string day;
 while(true){
cout<<"Enter the purchase amount=";
cin>>amount;
cout<<"what is day today?=";
cin>>day;
 bill(day,amount);
 }
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