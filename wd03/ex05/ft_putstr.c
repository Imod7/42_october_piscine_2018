#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
		ft_putchar(10);
	}
	//ft_putchar(10);
}

int main()
{
	char *plabel = "Flow in Coding";

	ft_putstr(plabel);
}
