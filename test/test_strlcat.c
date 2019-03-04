/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 19:55:07 by jkaplin           #+#    #+#             */
/*   Updated: 2019/02/15 12:12:46 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int		cmp_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*dst1;
	char	*dst2;
	int		your_result;
	int		true_result;

	dst1 = strdup(dst);
	dst2 = strdup(dst);
	your_result = ft_strlcat(dst1, src, dstsize);
	true_result = strlcat(dst2, src, dstsize);
	printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n");
	printf("dst = \"%s\" | src = \"%s\" | dstsize = %d\n\n", dst, src, (int)dstsize);
	printf("your_result: %d (dst = \"\"%s\"\")\n", (int)your_result, dst1);
	printf("true_result: %d (dst = \"\"%s\"\")\n", (int)true_result, dst2);
	if (your_result == true_result)
	{
		printf("\n- > ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ \e[32m SUCCESS \e[0m\n");
		return (0);
	}
	else
	{
		printf("\n- > ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ \e[31m FAILURE\n \e[0m");
		return (1);
	}
}

int		test_strlcat()
{
	int		sum;

	printf("size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);\n");

	sum = 0;
	sum += cmp_strlcat("testing", "game", 3);
	sum += cmp_strlcat("", "test", 7);
	sum += cmp_strlcat("test", "", 0);
	return (sum);
}
