#include<iostream>
using namespace std;
class student 
{
    public: char name[10];
            int rollno, marks[10];
    public: void get_details();
            void put_details();
            void result();
};
void student:: get_details(void)
{
    cout<<"Enter the name and roll no. of the students ";
    cin>>name>>rollno;
    cout<<"Enter the marks: ";
    for(int i=0; i<5; i++)
    {
        cin>>marks[i];
    }

}
void student::put_details(void)
{
    cout<< "Name and roll no. are: "<<name<<rollno;
}
void student::result(void)
{
    int sum=0;
    cout<<"Average marks are: ";
    for (int i=0; i<5; i++)
    {
        sum=sum+marks[i];
    }
    cout<<sum/5;
}
int main()
{
    cout<<"PRATEEK SINGH\n1/23/SET/BCS/362\nCLASS : 3A\n ";
    student s[10];
    for(int i=0; i<5; i++)
    {
        s[i].get_details();
        s[i].put_details();
        s[i].result();
    }
    return 0;
}
