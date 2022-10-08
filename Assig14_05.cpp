#include<iostream>
using namespace std;
int main()
{
 int i,a[1000],n;
 cout<<"Enter size of the array";
 cin>>n;
 cout<<"Enter the element of array";
 for(i=0;i<n;i++)
 cin>>a[i];
 for(i=1;i<n;i++)
 {
 if(a[0] > a[i])
  a[0] = a[i];
 }
 cout<<"Smallest number "<<a[0];
 return 0;
}
