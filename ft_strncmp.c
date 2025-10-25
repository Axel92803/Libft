/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iontanvu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:06:36 by iontanvu          #+#    #+#             */
/*   Updated: 2023/11/29 19:06:38 by iontanvu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*cast_s1;
	unsigned char	*cast_s2;

	cast_s1 = (unsigned char *)s1;
	cast_s2 = (unsigned char *)s2;
	if (n <= 0)
		return (0);
	while ((*cast_s1 || *cast_s2) && n > 0)
	{
		if (*cast_s1 != *cast_s2)
			return (*cast_s1 - *cast_s2);
		cast_s1++;
		cast_s2++;
		n--;
	}
	return (0);
}
