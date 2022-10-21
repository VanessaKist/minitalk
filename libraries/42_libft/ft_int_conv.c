/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 22:20:01 by coder             #+#    #+#             */
/*   Updated: 2022/10/21 17:03:41 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_int_conv(int len, va_list arg)
{
	long int	i;

	i = va_arg(arg, int);
	if (i < 0)
	{
		write(1, "-", 1);
		len++;
		i = i * -1;
	}
	ft_putbase(i, "0123456789");
	len = len + ft_intlen(i, 10);
	return (len);
}
