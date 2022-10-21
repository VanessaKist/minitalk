/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 00:51:31 by vkist-si          #+#    #+#             */
/*   Updated: 2022/10/21 18:02:00 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stdio.h>
# include <signal.h>
# include <stdarg.h>
# include <stdbool.h>
# include "../libraries/42_libft/libft.h"

int		ft_isdigit(int c);
size_t	ft_strlen(const char *str);
void	ft_putstr_fd(char *s, int fd);
int		ft_atoi(const char *str);

typedef struct s_var
{
	char	str;
	int		bits_shifted;
}	t_var;

#endif