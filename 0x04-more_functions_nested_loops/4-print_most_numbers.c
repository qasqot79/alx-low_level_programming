#include "main.h"

/**
 * print_most_numbers - prints 01356789\n
 *
 * Return: void
 */
void print_most_numbers(void)
{
  int i, n;
  printf("Enter the value of n: 10");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      if( (i!=2) && (i!=4) )
      {
         printf("%d ",i);
      }
  }
  return 0;
}
