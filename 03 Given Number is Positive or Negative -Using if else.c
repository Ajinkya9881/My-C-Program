#include<stdio.h>
#include<conio.h>

int main()
{
        int Num = 0;
        
        UP:
          
          printf("\n Enter an Integer Number To Check Whether it is Positive or Negative:");
          
          scanf("%d",&Num);
          
          if(Num == 0)
          {
           
                printf("\n Given Number %d is Neutral.",Num);
                
                goto UP;
                
           }
           else if(Num>0)
           {
                  
                  printf("\n Number %d is Positive.",Num);
           }
           
           else
           {
             
                  printf("\n Number %d is Negative.",Num);
           }
           
           printf("\n Bye Bye!!! \n\n Press Any Key To Quit!!!");
           
           getch();
          return 0;
}