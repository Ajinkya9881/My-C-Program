#include <stdio.h>
#include <conio.h>

int main()
{
  int value = 0;
  
  printf("\n Enter an ASCII value To get corrosponding character =");
  
  scanf("%d",&value );
  
  printf("\n\n character for given ASCII value is =<%c>. ",value) ;
  
  getch();
  return 0;
}