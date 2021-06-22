#include <stdio.h>
#include <stdio.h>

int main()
{
   int Num1 =0,Num2 =0;
   
   Accept:
         printf("\n Enter 2 Integer Numbers :");
         scanf("%d%d",&Num1,&Num2);
         
         if(Num1==Num2)
         {
             printf ("\n Both Numbers are Equql.");
             printf ("\n==========******============");
           
             printf ("\n\n for comparison there should be 2 Diffrent Numbers .");
             goto Accept;
         }
         if(Num1>Num2)
         {
             printf("\n Given 1st Numbers %d is Maximum.",Num1);
         }
         
         else 
         {
             printf ("\n Given 2nd Numbers %dis Maximum.",Num2);
         }
   
         printf(" \n\n Thanks!!!");
         getch();
         return 0;
}