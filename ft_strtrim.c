/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itanvuia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:50:10 by itanvuia          #+#    #+#             */
/*   Updated: 2025/10/25 13:50:10 by itanvuia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;
	char	*buff;

	if (!s1 || !set)
		return (NULL);
	len_s1 = ft_strlen(s1);
	while (*s1 && ft_strchr(set, *s1) != NULL)
	{
		s1++;
		len_s1--;
	}
	while (len_s1 > 0 && ft_strchr(set, s1[len_s1 - 1]) != NULL)
		len_s1--;
	buff = (char *)malloc(len_s1 + 1);
	if (!buff)
		return (0);
	ft_memcpy(buff, s1, len_s1);
	buff[len_s1] = '\0';
	return (buff);
}
