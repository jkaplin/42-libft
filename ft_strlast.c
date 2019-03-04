/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 09:59:09 by jkaplin           #+#    #+#             */
/*   Updated: 2019/03/04 09:59:11 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlast(const char *str)
{
	int		i;

	if (str[0] == '\0')
		return (-1);
	i = 0;
	while (str[i + 1] != '\0')
		i++;
	return (i);
}
