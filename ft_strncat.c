/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:31:12 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/30 11:58:26 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s1);
	j = 0;
	while (s2[j] != '\0')
	{
		if (n > 0)
		{
			s1[i] = s2[j];
			i++;
			j++;
			n--;
		}
		else
			break ;
	}
	s1[i] = '\0';
	return (s1);
}
