#include<iostream>
using namespace std;
int main()
{
 int i,a[5],n,j,temp;
 cout<<"Enter size of the array";
 cin>>n;
 cout<<"Enter the element of array";
 for(i=0;i<n;i++){
 cin>>a[i];
 }
 for(i=0;i<n-1;i++){
  for(j=i+1;j<n;j++)
  {
   if(a[i]>a[j]){
    temp = a[i];
    a[i]=a[j];
    a[j]=temp;
  }
 }
}
 cout<<"sorted array"<<endl;
 for(i=0;i<=n;i++)
 cout<<a[i]<<" "<<endl;
 cout<<"Second Largest Number "<<a[1];
  return 0;
 }
