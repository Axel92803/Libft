/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iontanvu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:45:55 by iontanvu          #+#    #+#             */
/*   Updated: 2023/12/10 16:04:14 by iontanvu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int val, size_t n)
{
	char	*s_cast;

	s_cast = (char *)str;
	while (n--)
	{
		*s_cast++ = val;
	}
	return (str);
}
