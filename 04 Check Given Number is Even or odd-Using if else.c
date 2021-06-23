#include <stdio.h>
#include<conio.h>

int main()
{
  int Num =0;
  UP:
     printf("Enter an Integer Number To cheack wheather it is Even or Odd:");
     scanf("%d",&Num);
  
     if (Num==0) 
     {
       printf("\n Given Number %d is Neutral \n .",Num);
     goto UP;
     }
      (Num %2 == 0)?
      printf("\n Number %d is Even.",Num): printf("\n Number %d  is Odd.",Num);
     
     
      printf("\n\n\n Bye Bye!!!\n press any key To Quite!!!");
     
      getch();
  
      return 0;
}