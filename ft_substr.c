/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iontanvu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:08:26 by iontanvu          #+#    #+#             */
/*   Updated: 2023/12/10 16:37:15 by iontanvu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char	*dest;
	size_t			i;
	size_t			j;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	else if (start + len >= ft_strlen(s))
		len = ft_strlen(s) - start;
	dest = (unsigned char *)malloc(len + 1);
	if (!dest)
		return (NULL);
	while (s[i] != '\0' && start > 0)
	{
		i++;
		start--;
	}
	j = 0;
	while (s[i] != '\0' && len-- > 0)
		dest[j++] = s[i++];
	dest[j] = '\0';
	return ((char *)dest);
}
