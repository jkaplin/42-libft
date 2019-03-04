/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 15:32:52 by jkaplin           #+#    #+#             */
/*   Updated: 2019/03/03 17:54:26 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_abs(double num)
{
	if (num < 0)
		return (-1 * num);
	else
		return (num);
}
