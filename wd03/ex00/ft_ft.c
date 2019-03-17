#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_ft(int *nbr)
{
  *nbr = 42;
}

int main()
{
  int i = 13;
  int *p = &i;
  
  printf("%d\n",*p);
  printf("%p\n",p);
  printf("%p\n",&i); 
  ft_ft(p);
  printf("%d",*p);
}
