#include<iostream>
using namespace std;
void check_result (int marks);
main(){
  while (true) 
  { 
  int marks;
  cout<<"Enter your marks=";
  cin>>marks;
  check_result(marks);
  }
  }
void check_result(int marks){
  if ( marks > 50)
 {
  cout<<"PASS";
  }
  if (marks < 50 )
  {
  cout<<"FAIL";

  }
  if (marks == 50)
  {
  cout<<"Work Hard or you will fail :/";
  }
}



