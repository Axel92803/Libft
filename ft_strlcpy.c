/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iontanvu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:50:05 by iontanvu          #+#    #+#             */
/*   Updated: 2023/11/29 18:50:07 by iontanvu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len_src;

	len_src = ft_strlen(src);
	while (*src && size > 1)
	{
		*dest++ = *src++;
		size--;
	}
	if (size > 0)
		*dest = '\0';
	return (len_src);
}
