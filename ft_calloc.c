/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iontanvu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:37:59 by iontanvu          #+#    #+#             */
/*   Updated: 2023/12/10 16:29:00 by iontanvu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			tot_s;
	void			*dst;

	if (nmemb * size > UINT_MAX)
		return (NULL);
	if ((nmemb > UINT_MAX && size) || (size > UINT_MAX && nmemb))
		return (NULL);
	tot_s = (nmemb * size);
	dst = malloc(tot_s);
	if (dst == NULL)
		return (NULL);
	else
		ft_bzero(dst, tot_s);
	return (dst);
}
