/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itanvuia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:50:10 by itanvuia          #+#    #+#             */
/*   Updated: 2025/10/25 13:50:10 by itanvuia         ###   ########.fr       */
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
