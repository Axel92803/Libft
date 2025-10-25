/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iontanvu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:44:35 by iontanvu          #+#    #+#             */
/*   Updated: 2023/11/29 18:44:37 by iontanvu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cast_s1;
	unsigned char	*cast_s2;

	cast_s1 = (unsigned char *)s1;
	cast_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((*cast_s1 == *cast_s2) && n - 1 > 0)
	{
		cast_s1++;
		cast_s2++;
		n--;
	}
	return ((int)(*cast_s1 - *cast_s2));
}
