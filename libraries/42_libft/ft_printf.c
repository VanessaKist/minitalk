/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:51:06 by coder             #+#    #+#             */
/*   Updated: 2022/10/21 17:02:11 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_convertion(const char *str, int len, va_list arg)
{
	if (*str == 'd' || *str == 'i')
		len = ft_int_conv(len, arg);
	else if (*str == 'c' || *str == '%')
		len = ft_char_conv(str, len, arg);
	else if (*str == 's')
		len = ft_str_conv(len, arg);
	else if (*str == 'u' || *str == 'x' || *str == 'X')
		len = ft_unsg_conv(str, len, arg);
	else if (*str == 'p')
		len = ft_ptr_conv(len, arg);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	arg;

	va_start(arg, str);
	len = 0;
	while (*str)
	{
		if (*str != '%')
		{
			write(1, str, 1);
			len++;
		}
		else
		{
			str++;
			len = ft_convertion(str, len, arg);
		}
		str++;
	}
	va_end(arg);
	return (len);
}
