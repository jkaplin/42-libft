/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 14:45:59 by jkaplin           #+#    #+#             */
/*   Updated: 2019/03/03 15:39:13 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*fresh_memory;
	size_t	i;

	fresh_memory = malloc(size);
	if (fresh_memory == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		((char *)(fresh_memory))[i] = 0;
		i++;
	}
	return (fresh_memory);
}
