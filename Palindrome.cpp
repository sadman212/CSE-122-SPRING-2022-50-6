#include <iostream>
using namespace std;
int main()
{
  int s,r,sum=0,temp;
  cout<<"Enter the Number=";
  cin>>s;
 temp=s;
 while(s>0)
{
 r=s%10;
 sum=(sum*10)+r;
 s=s/10;
}
if(temp==sum)
cout<<"Number is Palindrome.";
else
cout<<"Number is not Palindrome.";
  return 0;
}
