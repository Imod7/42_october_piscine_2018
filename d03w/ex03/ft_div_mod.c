#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b; 
}

int main()
{
	int dier;
	int upol;
	int *pdier = &dier;
	int *pupol = &upol;	

	ft_div_mod(130,20,pdier, pupol);
	printf("%d\n",dier);
	printf("%d\n",upol);

	return 0;
}
