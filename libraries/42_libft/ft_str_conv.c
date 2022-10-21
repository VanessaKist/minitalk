/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 22:58:22 by coder             #+#    #+#             */
/*   Updated: 2022/10/21 17:02:37 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_conv(int len, va_list arg)
{
	char	*s;

	s = va_arg(arg, char *);
	if (!s)
		s = "(null)";
	write(1, s, ft_strlen(s));
	len = len + ft_strlen(s);
	return (len);
}
