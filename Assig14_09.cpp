#include<iostream>
using namespace std;
int main()
{
 int i,a[10],n;
 cout<<"Enter size of the array";
 cin>>n;
 cout<<"Enter the element of array";
 for(i=0;i<n;i++){
 cin>>a[i];
 }
 for(i=n-1;i>=10;i--)
 cout<<a[i];

 return 0;
 }
