#include <stdio.h>

void ft_swap(int *a, int *b)
{
  int temp;
  
  temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  int num1 = 7;
  int num2 = 5;
  int *pnum1 = &num1;
  int *pnum2 = &num2;
 
  printf("pnum1= %d\n",*pnum1);
  printf("num1= %d\n", num1);
  printf("pnum2= %d\n",*pnum2);
  printf("num2= %d\n", num2);
  ft_swap(pnum1, pnum2);
  printf("num1= %d\n", num1);
  printf("pnum1 = %d\n",*pnum1);
  printf("num2= %d\n", num2);
  printf("pnum2 = %d\n",*pnum2);
  return(0);
}
