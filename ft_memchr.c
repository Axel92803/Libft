/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iontanvu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:44:11 by iontanvu          #+#    #+#             */
/*   Updated: 2023/11/29 18:44:14 by iontanvu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cast_s;

	cast_s = (unsigned char *)s;
	while (n--)
	{
		if (*cast_s == (unsigned char)c)
		{
			return ((void *)cast_s);
		}
		cast_s++;
	}
	return (NULL);
}
