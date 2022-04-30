#include<iostream.h>
#include<conio.h>

class B;
class A
{
  private:
		  int a;
  public:
		  void get()
		  {
		   cout<<"Enter the value of a:->";
		   cin>>a;
		  friend void show (A,B);
};
class B
{
  private:
		  int b;
  public:
		  void get()
		  {
		   cout<<"Enter the value of b:->";
		   cin>>b;
		  }
		  friend void show(A,B);
};
void show(A x,B y)
{
  int add;
  add=x.a+y,b;
   cout<<"Addition is:->"<<add<<endl:
   int main()
   {
   clrscr();
	 A x;
	 x.get();
	 B y;
	 y.get();
	 show(a,b);
	 getch();
	 return(0);
   }
