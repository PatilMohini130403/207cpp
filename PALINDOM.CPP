//palindrom number c++ program

#include<iostream.h>
#include<conio.h>
void main()
{
	  int rem,no,result=0,tem;
	  clrscr();
	  cout<<"enter number=>";
	  cin>>no;
	  tem=no;
	  while(no>0)
	  {
	      rem=no%10;
	      result=(result*10)+rem;
	      no=no/10;
	  }
	  if(result==tem)
	  {
	      cout<<"number is palindrom";
	  }
	  else
	  {
	      cout<<"number is not palindrom ";
	  }
	  getch();

}