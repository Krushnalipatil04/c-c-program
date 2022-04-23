		    // string count programm in cpp
#include<iostream.h>
#include<conio.h>
#include<string.h>
class count
{
  private:
	   char name[25];
	   int i,n,vowel,space,l;
  public:
	void get();
	void cal();
 };
 void count::get()
 {
   cout<<"Enter the string and count length,space,vowel";
   gets(name);
}
void count::cal()
{
  vowel=0;
  space=0;
  n=0;
  l=strlen(name);
  for(i=0;i<l;i++)
 {
 switch(name[i])
 case'a':vowel++;
	break;
 case'e':vowel++;
 break;
 case'i':vowel++;
 break;
 case'o':vowel++;
 break;
 case'u':vowel++;
 break;
 case' ':space++;
 break;
 default:n++;
 }
 }
 cout<<"\nvowels in sentence are:"<<vowel;
 cout<<"\n space in sentence are:"<<space;
 cout<<"\n consonant in sentence are:"<<n;
 cout<<"\n length in sentence are:"<<l;
}
void main()
clrscr();
count c;
c.get();
c.cal();
getch();
}




















