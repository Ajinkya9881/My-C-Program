#include <stdio.h>
#include <conio.h>

int main()
{
    int No=0;
    printf("\n Enter a Number=");
    scanf("%d",&No);
    
    if((No %5 == 0) && (No %7 == 0))
    
    {
      printf("\n\n Given No %d is Divisible By Both 5&7.",No);
    }
    else if (No %5 == 0)
    {
      printf("\n\n Given No %d is Only Divisible By 5.",No);
    }
    else if (No % 7 == 0)
    {
      printf("\n\n Given No %d is Only Divisible By 7.",No);
    }
    else
    {
      printf("\n\n Given No %d is Not Divisible By Both 5&7.",No);
    }
    getch();
    return 0;
}