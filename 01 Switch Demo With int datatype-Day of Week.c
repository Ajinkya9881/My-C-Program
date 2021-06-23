#include <stdio.h>
#include <conio.h>


int main()
{
    int Day = 0;
    
  printf("\n Enter a Day Number (1 - 7)=");
  scanf("%d",& Day);
  
  switch (Day)
  {
    
         case 1:
              printf("\n MONDAY");
              
         case 2:
              printf("\n TUESDAY");
              
         case 3:
              printf("\n WEDNESDAY");
              
         case 4:
              printf("\n THURSDAY");
              
         case 5:
              printf("\n FRIDAY");
              
         case 6:
              printf("\n SATURDAY");
              
         case 7:
              printf("\n SUNDAY");
              
         default:
              printf("\n INVALID DAY VALUE!!!");
              
         }
          printf("\n Thanks For Input .. Press A Key To Close...");
          getch();
          return 0;
          
 }
