#include<iostream>
using namespace std;
int main()
{
 int a[5],i,sum=0,evensum,oddsum;
 cout<<"Enter five numbers";
 for(i=0;i<=4;i++)
 cin>>a[i];
for(i=0;i<=4;i++)
 if(a[i]%2==0)
 {
  evensum = evensum+a[i];
}
 else{
        oddsum = oddsum + a[i];
  }
 //sum = sum+a[i];
 cout<<"sum of all even numbers"<<evensum;
 cout<<"sum of all odd numbers"<<oddsum;
 //cout<<sum;
 return 0;
}
