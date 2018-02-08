//Author:Travis Bybee
#include<iostream>

using namespace std;

int main()
{
  char sus;
  int val;
  cout<<"What character do you want to know about?\n";
  cin>> sus;
  val = (int)sus;
  //when user's entry is between A-Z...
  if('A'<= sus && sus <='Z')
  {
  cout<< sus<<" is an upper case letter!\n";
  }
  //when user's entry is between a-z...
  else if('a'<= sus && sus <='z')
  {
  cout<< sus<<" is a lower case letter!\n";
  }
  //in all other cases...
  else
  {
  cout<< sus<<"?! Pssh. What are you talking about?\n";
  } 
  //no matter what they enter...
  cout<<"The ASCII value is: "<<val<<"\n";

  return 0;
}
