/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iontanvu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:08:08 by iontanvu          #+#    #+#             */
/*   Updated: 2023/11/29 19:44:47 by iontanvu         ###   ########.fr       */
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
