#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class student
{
public:
    char name[10];
    char dob[20];
    int rn;
    long int tel;
    bool operator==(const student& i1)
    {
        if(rn==i1.rn)
            return 1;
        return 0;
    }

    bool operator<(const student& i1)
    {
        if(rn<i1.rn)
            return 1;
        return 0;
    }
};

vector<student> o1;
void print(student &i1);
void display();
void insert();
void search();
void dlt();
bool compare(const student &i1, const student &i2)
{
    return i1.rn < i2.rn;
}
int main()
{
    int ch;
    do
    {
        cout<<"\n* * * * * Menu * * * * *";
        cout<<"\n1.Insert";
        cout<<"\n2.Display";
        cout<<"\n3.Search";
        cout<<"\n4.Sort";
        cout<<"\n5.Delete";
        cout<<"\n6.Exit";
        cout<<"\nEnter your choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
           break;
        case 3:
            search();
            break;
        case 4:
            sort(o1.begin(),o1.end(),compare);
            cout<<"\n\n Sorted on Rollnum : ";
            display();
            break;
        case 5:
            dlt();
            break;
        case 6:
            exit(0);
        }
    } while(ch!=7);
    return 0;
}

void insert()
{
    student i1;
    cout<<"\nEnter Student Name : ";
    cin>>i1.name;
    cout<<"\nEnter Student DOB : ";
    cin>>i1.dob;
    cout<<"\nEnter Student Tel_num : ";
    cin>>i1.tel;
    cout<<"\nEnter Student Roll_num : ";
    cin>>i1.rn;
    o1.push_back(i1);
}
void display()
{
    for_each(o1.begin(),o1.end(),print);
}
void print(student &i1)
{
    cout<<"\n";
    cout<<"\nStudent NAME : "<<i1.name;
    cout<<"\nStudent DOB : "<<i1.dob;
    cout<<"\nStudent TEL_NUM : "<<i1.tel;
    cout<<"\nStudent ROLL_NUM : "<<i1.rn;
    cout<<"\n\n";
}

void search()
{
    vector<student>::iterator p;
    student i1;
    cout<<"\nEnter Student's Roll no to search : ";
    cin>>i1.rn;
    p=find(o1.begin(),o1.end(),i1);
    if(p==o1.end())
    {
        cout<<"\nNot found!!!";
    }
    else
    {
        cout<<"\nFound!!!";
    }
}
void dlt()
{
    vector<student>::iterator p;
    student i1;
    cout<<"\nEnter Student Roll num to delete : ";
    cin>>i1.rn;
    p=find(o1.begin(),o1.end(),i1);
    if(p==o1.end())
    {
        cout<<"\nNot found!!!";
    }
    else
    {
        o1.erase(p);
        cout<<"\nDeleted!!!";
    }
}