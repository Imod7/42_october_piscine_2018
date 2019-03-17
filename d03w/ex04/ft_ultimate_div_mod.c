#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}

int main()
{
	int num1;
	int num2;
	int *pnum1 = &num1;
	int *pnum2 = &num2;
	
	num1 = 469;
	num2 = 21;
	ft_ultimate_div_mod(pnum1,pnum2);

	printf("%d\n", *pnum1);
	printf("%d\n", *pnum2);
}
