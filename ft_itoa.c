/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 15:44:13 by jkaplin           #+#    #+#             */
/*   Updated: 2019/03/03 15:32:41 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		i;

	size = 0;
	if (n <= 0)
		size++;
	i = n;
	while (i != 0)
	{
		size++;
		i /= 10;
	}
	str = (char *)malloc(sizeof(char) * (size + 1));
	str[size] = '\0';
	if (n == 0)
		str[--size] = '0';
	while (n != 0)
	{
		str[--size] = '0' + ft_abs(n % 10);
		n /= 10;
	}
	if (size == 1)
		str[--size] = '-';
	return (str);
}
