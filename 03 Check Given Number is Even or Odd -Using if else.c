#include<stdio.h>
#include<conio.h>
 
 int main()
{
  int Num = 0;
  
  printf("\n Enter an Integer Number To Check Whether it is EVEN or ODD :");
  scanf("%d",&Num);
  
  if(Num == 0)
  {
         printf("\n Given Number %d is Neutral",Num);
  }
  else if (Num% 2 == 0)
  {
         printf ("\n Number  %d is EVEN.",Num);
  }
  else 
  {
         printf ("\n Number  %d is ODD",Num);
  }
         printf ("\n\n\n Bye Bye!!! \n Press Any Key To Quit!!!");
         
   getch();
   return 0;
}