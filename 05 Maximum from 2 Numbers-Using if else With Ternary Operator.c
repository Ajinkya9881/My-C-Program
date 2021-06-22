#include <stdio.h>
#include <conio.h>

int main()
{
  int Num1 =0,Num2 =0;
  
  printf("\n Enter 2 Integer Numbers To Find Max from them:");
  Accept:
       scanf("%d%d",&Num1,&Num2);
       
       if(Num1==Num2)
       {
         printf("\n both Numbers are Equql.");
         printf("==========*****==========");
         printf("\n Enter 2 New Numbers To Find Max from them:");
         goto Accept;
        
       }
       (Num1>Num2)? printf("\n Given 1st Numbers %d isMaximum.",Num1):printf("\n Given 2ndNumbers %d isMaximum.",Num2);
      
       printf("\n\n Thanks!!!");
       getch();
       return 0;
}