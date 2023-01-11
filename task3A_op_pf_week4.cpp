#include<iostream>
using namespace std;
void check_result (int marks);
main(){
  int marks;
  cout<<"Enter your marks=";
  cin>>marks;
  check_result(marks);
  }
void check_result(int marks) {
  if ( marks >= 90)
 {
  cout<<"A";
  }
  if (marks >= 80 && marks < 90 )
  {
  cout<<"B";

  }
   if (marks >= 70 && marks < 80 )
  {
  cout<<"C";
  }

   if (marks >= 60 && marks < 70 )
  {
  cout<<"D";

  }
    if (marks >= 50 && marks < 60 )
  {
  cout<<"D-";

  }
  if (marks < 50)
  {
  cout<<"F\n";
  cout<<"Tu mera putar chutti kar ";
  }
  }



