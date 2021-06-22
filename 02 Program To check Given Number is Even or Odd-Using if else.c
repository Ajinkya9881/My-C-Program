#include<stdio.h>
#include<conio.h>

int main()
{
  int Num=0;
 
  printf("\n Enter an Integer Number To cheack wheather It is Even or ODD :");
  scanf("%d",&Num);
  
  if(Num % 2 == 0)
  {
          printf("\n Number %d is Even .",Num);
  }
  else 
  {
          printf("\n Number %d is ODD.",Num);
  }
  printf("\n Bye Bye !!! \n \n Press any key To Quite!!!");
  
   getch();
  
  return 0;
}