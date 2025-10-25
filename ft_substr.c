/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itanvuia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:50:10 by itanvuia          #+#    #+#             */
/*   Updated: 2025/10/25 13:50:10 by itanvuia         ###   ########.fr       */
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
