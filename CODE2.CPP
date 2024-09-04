#include<iostream>
using namespace std;
int main()
{
int a[10],i,x=0;
cout<<"PRATEEK SINGH \n1/23/SET/BCS/362 \nCLASS : 3A \n ";
cout<<"Enter the values for array : \n";
for(i=0; i<10;i++)
{
cin>>a[i];
x=x+a[i];
}
cout<<"The sum of all term of array is :"<<x;
return 0;
}