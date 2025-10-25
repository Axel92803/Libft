/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iontanvu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:40:42 by iontanvu          #+#    #+#             */
/*   Updated: 2023/12/10 19:49:39 by iontanvu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_int(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count = 1;
	if (n < 0)
		n *= -1;
	if (n == -2147483648)
		count = 10;
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*res;
	size_t		len;
	long int	num;

	num = n;
	len = len_int(n);
	if (n < 0)
	{
		num *= -1;
		len++;
	}
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	*(res + len) = 0;
	while (len--)
	{
		*(res + len) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		*(res + 0) = '-';
	return (res);
}
