#include <stdio.h>
#include <conio.h>

int main()
{
  int Num=0;
  
  printf("\n Enter an Integer Number To cheack wheather it is Even or Odd:");
  scanf("%d",&Num);
  
  (Num==0)? printf("\n Given Number is %d is Neutral.",Num):(Num%2==0)? printf("\n Number%d is Even. ",Num):printf("\n Number %d is Odd.",Num);
  
  printf("\n\n\n Bye Bye !!!! \n Press any key To Quite");
  
  getch();
  return 0;
}