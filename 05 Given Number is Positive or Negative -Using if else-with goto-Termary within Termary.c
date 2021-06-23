#include<stdio.h>
#include<conio.h>

int main()
{
       int Num=0;
  
       printf("\n Enter an Integer Number To check Whether it is Positive or Negative : ");
       scanf("%d",&Num);
  
       (Num == 0) ? printf("\n Given Number %d is Neutral.",Num) : ( (Num > 0) ? printf("\n Given Number %d is Positive.",Num) : printf("\n Given Number %d is Negative.",Num) );
  
       printf("\n Bye Bye!!! \n\n Press Any Key To Quite!!!");
      
       getch();
       
       return 0;
}