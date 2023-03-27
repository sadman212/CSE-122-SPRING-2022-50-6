#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(;;)
    {
     a++;
     int b=a/1000;
     int c=(a/100)%10;
     int d=(a/10)%10;
     int e(a%10);
     if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&e!=d)
     {
         break;
     }

    }

cout<<a;
}
