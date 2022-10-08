//Write a program to find the greatest number stored in an array of size 10. Take array values from the user.

#include<iostream>
using namespace std;
int main()
{
 int i,greatest,a[1000],n;
 cout<<"Enter size of the array";
 cin>>n;
 cout<<"Enter the element of array";
 for(i=0;i<n;i++)
 cin>>a[i];
 for(i=1;i<n;i++)
 {
 if(a[0] < a[i])
  a[0] = a[i];
 }
 cout<<"Greatest number "<<a[0];
 return 0;
}
