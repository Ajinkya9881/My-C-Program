#include <stdio.h>
#include <conio.h>

int main()
{
  int No1=0,No2=0,Temp=0;
  
  printf("\n Enter 2 Numbers=");
  scanf("%d%d",&No1,&No2);
  
  printf("\n values of given Numbers before swap=>");
  printf("\n No1=%d,No2=%d.",No1,No2);
  
  Temp=No1;
  Temp=No2;
  No2=Temp;
  
  printf("\n values of given numbers after swap=>");
  printf("\n No1=%d,No2=%d.",No1,No2);
  
  getch();
  return 0;
}