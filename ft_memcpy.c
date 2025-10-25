/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iontanvu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:44:56 by iontanvu          #+#    #+#             */
/*   Updated: 2023/11/29 18:44:59 by iontanvu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *str, size_t n)
{
	unsigned char	*cast_d;
	unsigned char	*cast_s;	

	cast_d = dest;
	cast_s = (unsigned char *)str;
	if (!dest && !str)
		return (NULL);
	while (n--)
		*cast_d++ = *cast_s++;
	return (dest);
}
