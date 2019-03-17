#include <stdio.h>

char	*ft_strrev(char *str)
{
	int counter_from_start;
	int counter_from_end;
	char temp;
	char *tempstr = str;
	
	printf("tempstr[start] = %c \n",*tempstr);

	counter_from_start = 0;
	counter_from_end = 0;

	while (*tempstr != '\0')
	{
		counter_from_end++;
		tempstr++;
	}
	
	printf("tempstr[end] = %c \n",*(tempstr-1));

	printf("str[start] = %c \n",*(str + counter_from_start));	
	printf("str[end] = %c \n",*(str +counter_from_end-1));
	
	while (counter_from_end > counter_from_start)
	{
		temp = *(str + counter_from_end - 1);
		//*(str + counter_from_end - 1) = *(str + counter_from_start);
		*(str + counter_from_start) = temp;
		printf("str[%d] = %c \n",counter_from_start, *(str+counter_from_start));
		//printf("str[%d] = %c \n",count, temp);
		printf("str[%d] = %c \n",counter_from_end-1, *(str+counter_from_end-1));
		counter_from_end--;
		counter_from_start++;
	}
	return (str);
}

int main()
{
	char *pstr = "zoveel";
	char *res = ft_strrev(pstr);
	printf("main = %c \n",*res);
	return 0;
}
