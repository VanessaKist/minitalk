/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 01:11:07 by coder             #+#    #+#             */
/*   Updated: 2022/10/21 17:02:03 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(unsigned long i, int base)
{
	int	cont;

	cont = 0;
	if (i == 0)
		return (1);
	while (i > 0)
	{
		i = i / base;
		cont++;
	}
	return (cont);
}
