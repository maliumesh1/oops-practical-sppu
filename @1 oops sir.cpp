/* 1.	Implement a class Complex which represents the Complex Number data type. Implement the following
Constructor (including a default constructor which creates the complex number 0+0i).
Overload operator+ to add two complex numbers.
Overload operator* to multiply two complex numbers.
Overload << and >> to print and read Complex Numbers.
*/

#include<iostream>
using namespace std;
class complex
{
public:
	int real,img,real1,img1;
	float den,real2,img2;
	complex()
	{
		real=0;
		img=0;
	}
	void getdata()
	{
		cout<<"\n ENTER A NO.: ";
		cin>>real>>img;
	}
	void disp()
	{
		cout<<real<<"+"<<img<<"i";
	}
	
	void disp2()
	{
		cout<<real1<<"+"<<img1<<"i";
	}
	void disp3()
	{
		cout<<real2<<"+"<<img2<<"i";
	}
	complex operator +(complex c1)
	{
		complex t;
		t.real=real+c1.real;
		t.img=img+c1.img;
		return(t);
	}
complex operator -(complex c1)
{
complex t;
          t.real=real-c1.real;
          t.img=img-c1.img;
return(t);
}
	complex operator *(complex c1)
	{   
		complex t;
		t.real1=((real*c1.real)-(img*c1.img));
		t.img1=((real*c1.img)+(img*c1.real));
		return(t);
	}
	complex operator /(complex c2)
	{
		complex t;
		den=((c2.real*c2.real)+(c2.img*c2.img));
		cout<<"deno:="<<den<<"\n";
		c2.img=c2.img*(-1);
		t.real2=((real*c2.real)-(img*c2.img));
		t.img2=((real*c2.img)+(img*c2.real));
		t.real2=t.real2/den;
		t.img2=t.img2/den;
		return(t);
	}
};
int main()
{  
int ch;
char n;
complex c2,c3,c4;
c2.getdata();
c3.getdata();
do
{
cout<<"Enter u r choice:";
cout<<"\n1.ADDITION\n2.SUTRACTION\n3.MULTIPLICATION\n4DIVISION\n5.EXIT\n";
cin>>ch;
switch(ch)
{
case 1:
	c4=c2+c3;
cout<<"Addition=";
	c4.disp();
break;
case 2:
        c4=c2-c3;
cout<<"Subtraction=";
c4.disp();
break;
case 3:
        c4=c2*c3;
cout<<"Multiplication=";
c4.disp2();
break;
case 4:
        c4=c2/c3;
cout<<"Division=";
c4.disp3();
break;      
case 5:
return 0;
break;
   }
	cout<<"\nDo you want to continue-(y/n)?: ";
	cin>>n;
}while(ch<5);
	return 0;
}
