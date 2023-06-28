#include<stdio.h>
#include<conio.h>

main()
{
   clrscr();
   int a=200,b=150,c=240,d=2000;
   if(a>b)
   {
     if(a>c)
     {
       if(a>d)
       {
	 printf("A is Max");
       }
       else
       {
	 printf("D is Max");
       }
     }
     else
     {
       if(c>d)
       {
	 printf("C is Max");
       }
       else
       {
	 printf("D is Max");
       }

     }

   }
   else
   {
      if(b>c)
      {
	 if(b>d)
	 {
	    printf("B is Max");
	 }
	 else
	 {
	    printf("D is Max");
	 }
      }
      else
      {
	 if(c>d)
	 {
	   printf("C is Max");
	 }
	 else
	 {
	   printf("D is Max");
	 }
      }
   }


   getch();

}