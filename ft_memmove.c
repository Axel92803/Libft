/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iontanvu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:45:17 by iontanvu          #+#    #+#             */
/*   Updated: 2023/11/29 18:45:19 by iontanvu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*cast_s;
	unsigned char	*cast_d;

	cast_s = (unsigned char *)src;
	cast_d = dest;
	if (!dest && !src)
		return (NULL);
	if (cast_d < cast_s)
		ft_memcpy(cast_d, cast_s, n);
	else if (cast_d > cast_s)
	{
		cast_s += n - 1;
		cast_d += n - 1;
		while (n > 0)
		{
			*cast_d = *cast_s;
			cast_d--;
			cast_s--;
			n--;
		}
	}
	return (dest);
}
