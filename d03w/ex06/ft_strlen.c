#include <stdio.h>

int	ft_strlen(char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char *pstr = "met uitneembare plattegrond";
	printf("%d\ttab\fnew page", ft_strlen(pstr));
}

