#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
 *********nbr = 42; 
}

int main()
{
  int i = 3;
  int *pi = &i;
  int **ppi = &pi;
  int ***pppi = &ppi;
  int ****ppppi = &pppi;
  int *****pppppi = &ppppi;
  int ******ppppppi = &pppppi;
  int *******pppppppi = &ppppppi;
  int ********ppppppppi = &pppppppi;
  int *********pppppppppi = &ppppppppi;

  printf("%d\n", *********pppppppppi);
  ft_ultimate_ft(pppppppppi);
  printf("%d\n",i);
  printf("%p\n",&i);
  printf("%p\n",&pi);
  return(0);
}
