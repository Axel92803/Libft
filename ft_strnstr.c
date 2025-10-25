/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iontanvu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:06:51 by iontanvu          #+#    #+#             */
/*   Updated: 2023/12/10 17:02:58 by iontanvu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *key, size_t len)
{
	size_t	k;

	if (!*key)
		return ((char *)str);
	k = ft_strlen(key);
	if (str == NULL && len <= 0)
		return (NULL);
	while (*str && k <= len)
	{
		if (*str == *key && ft_strncmp(str, key, k) == 0)
			return ((char *)str);
		str++;
		len--;
	}
	return (NULL);
}
