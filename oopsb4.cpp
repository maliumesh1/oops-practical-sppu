#include<iostream>
#include<fstream>
using namespace std;
class Student             // declaring class employee
{
 string Name;
 int ROLLNO;
 double CGPA;
 public:
 void accept()
 {
 cout<<"\n Name : ";
 cin.ignore();
getline(cin,Name);
 cout<<"\n ROLLNO : ";
 cin>>ROLLNO;
 cout<<"\n CGPA : ";
 cin>>CGPA;
 }
 void display()
 {
 cout<<"\n Name : "<<Name;
 cout<<"\n ROLL NO : "<<ROLLNO;
 cout<<"\n CGPA : "<<CGPA<<endl;
 }
};

int main()
{
 Student o[5];
 fstream f;
 int i,n;

 f.open("demo.txt",ios::out);
 cout<<"\n Enter the number of student info you want to store : ";
 cin>>n;
 for(i=0;i<n;i++)
 {
 cout<<"\n Enter information of Student "<<i+1<<"\n";
 o[i].accept();
 f.write((char*)&o[i],sizeof o[i]);
 }

 f.close();

 f.open("demo.txt",ios::in);
 cout<<"\n Information of Students is as follows : \n";
 for(i=0;i<n;i++)
 {
 cout<<"\nStudent "<<i+1<<"\n";
 f.write((char*)&o[i],sizeof o[i]);
 o[i].display();
 }
 f.close();
 
 return 0;
}