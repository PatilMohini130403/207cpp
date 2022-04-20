//revers number c++ program

#include<iostream.h>
#include<conio.h>
void main()
{
	  int rem,no,revers=0,tem;
	  clrscr();
	  cout<<"enter number=>";
	  cin>>no;
	  while(no>0)
	  {
	      rem=no%10;
	      revers=(revers*10)+rem;
	      no=no/10;
	  }
	  cout<<"revers number is =>"<<revers;
	  getch();
}