#include<stdio.h>
#include<conio.h>
  void main()
  {
      int mn;//mn=Month Number
      clrscr();
      printf("Enter the Month number");
      scanf("%d",&mn);
      switch(mn)
      {
	 case 1 :
		  printf("January\n");
		  break;

	  case 2 :
		  printf("February\n");
		  break;
	  case 3 :
		  printf("March\n");
		  break;
	  case 4 :
		  printf("April\n");
		  break;

	  case 5 :
		  printf("May\n");
		  break;

	  case 6 :
		  printf("Jun\n");
		  break;

	 case 7 :
		  printf("July\n");
		  break;
	 case 8 :
		  printf("Augest\n");
		  break;
	  case 9 :
		  printf("September\n");
		  break;
	  case 10 :
		  printf("Octomber\n");
		  break;
	   case 11 :
		  printf("November\n");
		  break;
	    case 12 :
		  printf("December\n");
		  break;
	   Default:
		     printf("invalid maonth number ......\nplease try again.....\n");
		     break;


		   }
      getch();

   }