/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 11:31:20 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/20 11:50:09 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else 
		return (0);
}
/*
#include <ctype.h>
//#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int a;
	int b;

	a = 0;
	b = 0;
	if (ac != 2)
		return 0;
	else if (av[1][1] != '\0')
		return 0;
	else
	{
		a = ft_isascii(av[1][0]);
		printf("ft_isascii: %d", a);
		printf("\n");
		b = isascii(av[1][0]);
		printf("isascii: %d", b);
		printf("\n");
	}
 return 0;
 }*/