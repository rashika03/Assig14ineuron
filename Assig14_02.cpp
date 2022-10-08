#include<iostream>
using namespace std;
int main()
{
 int a[10],i,sum=0;
 float avg;
 cout<<"Enter ten numbers";
 for(i=0;i<=9;i++)
 cin>>a[i];
 for(i=0;i<=9;i++)
 sum = sum+a[i];
 avg = sum/10.0;
 cout<<avg;
 return 0;
}
