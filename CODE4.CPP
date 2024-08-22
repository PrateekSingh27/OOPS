#include<iostream>
using namespace std;

class student{
    int i,n,sum=0;
    int roll,marks[100];
        char name[20];
    public:student();
        void read();
        void result();
        void display();

};
student::student(){}
void student::read(){
    cout<<"Enter the Name of student:";
    cin>>name;
    cout<<"Enter the roll no:";
    cin>>roll;
}
void student::result(){
    cout<<"Enter the number of subjects: ";
    cin>>n;
    cout<<"Enter the marks of students:";
    for(i=0;i<n;i++)
        cin>>marks[i];
    for (i=0;i<n;i++)
        sum=sum+marks[i];
    sum=sum/i;
}
void student::display(){
    cout<<"The deatils of the student are:"<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Roll no:"<<roll<<endl;
    cout<<"Result:"<<sum<<endl;

}

int main()
{
    cout<<"PRATEEK SINGH\n1/23/SET/BCS/362\nCLASS : 3A\n ";
    int i,n;
    student s[100];
    cout<<"Enter the no of students:";
    cin>>n;
    for(i=0;i<n;i++){
        s[i].read();
        s[i].result();     
    }
    for(i=0;i<n;i++)
        s[i].display();
}