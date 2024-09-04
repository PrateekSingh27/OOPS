#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
int temp =*a;
*a=*b;
*b=temp;
}
int main()
{
cout<<"PRATEEK SINGH \n1/23/SET/BCS/362 \nCLASS : 3A \n ";
int x,y;
cout<<"Enter the value for X:\n";
cin>>x;
cout<<"Enter the value for Y:\n";
cin>>y;
swap(&x,&y);
cout<<"The swaped value of X: \t"<<x<<endl;
cout<<"The swaped value of Y: \t"<<y<<endl;
}
