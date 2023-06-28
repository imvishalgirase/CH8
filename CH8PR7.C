#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,e;
    clrscr();
    printf("Plese enter the value of A=");
    scanf("%d",&a);
    printf("Plese enter the value of B=");
    scanf("%d",&b);
    printf("Plese enter the value of c=");
    scanf("%d",&c);
    printf("Plese enter the value of d=");
    scanf("%d",&d);
    printf("Plese enter the value of e=");
    scanf("%d",&e);
    (a>b)?(a>c)?(a>d)?(a>e)?printf("A is max"):printf("E is max"):(d>e)? printf("D is max"):printf("E is max"):(c>d)?(c>e)?printf("c is max"):printf("E is max"):(d>e)?printf("D is max"):printf("E is max")
	 :(b>c)?(b>d)?(b>e)?printf("B is max"):printf("E is max"):(d>e)? printf("D is max"):printf("E is max"):(c>d)?(c>e)?printf("c is max"):printf("E is max"):(d>e)?printf("D is max"):printf("E is max");
   getch();
   }