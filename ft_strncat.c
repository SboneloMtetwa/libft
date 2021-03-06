/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtetwa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 13:17:36 by smtetwa           #+#    #+#             */
/*   Updated: 2018/06/07 13:17:42 by smtetwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int i;
	int x;

	i = 0;
	x = 0;
	while (s1[i] != '\0')
	{
		i++;
		x++;
	}
	i = 0;
	while (s2[i] != '\0' && i < (int)n)
	{
		s1[x] = s2[i];
		i++;
		x++;
	}
	s1[x] = '\0';
	return (s1);
}
