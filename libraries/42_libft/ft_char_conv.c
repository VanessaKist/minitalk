/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_conv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 22:34:38 by coder             #+#    #+#             */
/*   Updated: 2022/10/21 17:01:44 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_char_conv(const char *str, int len, va_list arg)
{
	long int	i;

	if (*str == '%')
	{
		write(1, "%", 1);
		len++;
	}
	else
	{
		i = va_arg(arg, int);
		write(1, &i, 1);
		len++;
	}
	return (len);
}
