/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itanvuia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:50:10 by itanvuia          #+#    #+#             */
/*   Updated: 2025/10/25 13:50:10 by itanvuia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t			x;
	size_t			j;
	size_t			tot_len;
	unsigned char	*dest;

	if (!s1 || !s2)
		return (NULL);
	tot_len = ft_strlen(s1) + ft_strlen(s2);
	dest = (unsigned char *)malloc(tot_len + 1);
	if (!dest)
		return (NULL);
	x = 0;
	while (s1[x] != '\0' && s1)
	{
		dest[x] = s1[x];
		x++;
	}
	j = 0;
	while (s2[j] != '\0' && s2)
	{
		dest[x++] = s2[j++];
	}
	dest[x] = '\0';
	return ((char *)dest);
}
