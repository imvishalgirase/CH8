#include<stdio.h>
#include<conio.h>
void main ()
{
   int a,b,c;
   clrscr();
   printf("Plz enter the value of A=");
   scanf("%d",&a);
   printfe("Plz enter the value of B=");
   scanf("%d",&b);
   printf("Plz enter 1 for addition\n");
   printf("Plz enter 2 for substraction\n");
   printf("Plz enter 3 for multiplaction\n");
   printf("Plz enter 4 for Division\n");
   printf("Plz enter 5 for Modulus\n");
   printf("Enter your choice=");
   scanf("%d",&c);
      switch(c)
      {
	  case 1 :
		    printf(" Addition  of A+B =%d",a+b);
		    break;
	 case 2 :
		     printf("Substraction of A-B =%d",a-b);
		     break;

	  case 3 :
		     printf("Multiplication of A*b =%d",a*b);
		     break;
	  case 4 :
		     printf("Division of A/B =%d",a/b);
		     break;

	  case 5 :
		     printf("Modulus of A%B =%d",a%b);
		     break;


		 default :
			    printf("plz enter a proper choice");
			    }
			    getch();
			    }