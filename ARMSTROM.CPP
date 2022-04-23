#include<iostream.h>
#include<conio.h>
void main()
{
	int a,sum=0,n,m;
	clrscr();
	cout<<"enter the number:";
	cin>>n;
	a=n;
	while(n>0)
	{
	m=n%10;
	sum=sum+m*m*m;
	n=n/10;
	}
	if(sum==a)
	{
	cout<<"\n number is armstrong:\t";
	}
	else
	{
	cout<<"\n number is not armstrong:\t";
	}
	getch();
	}