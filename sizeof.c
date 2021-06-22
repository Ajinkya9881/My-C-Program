#include <stdio.h>
#include <conio.h>

  int main() 
{
  char ch  = '\0';
  int No   = 55;
  int size = 0;
  size = sizeof (No);
  
  printf("\n size for integer No is =%d",size);
  
  printf ("\n size for character ch is=%d",sizeof(ch));
  
  printf ("\n size for float data type is = %", sizeof(float));
  
  printf ("\n size for double data type is= %d",sizeof(double));
 
  getch();
  
  return 0;
}