/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsaripap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 07:41:01 by dsaripap          #+#    #+#             */
/*   Updated: 2018/10/27 09:54:02 by dsaripap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		main(void)
{
	int a,b;

	a = 5;
	b = 8;
	//write(1,&a,1);
	printf("a = %d", a);
	//write(1,&b,1);
	printf("b = %d", b);
	ft_swap(&a, &b);
	//write(1,&a,1);
    printf("a = %d", a);	
	printf("b = %d", b);
	//write(1,&b,1);
}		
