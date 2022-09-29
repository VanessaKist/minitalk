/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 00:55:09 by vkist-si          #+#    #+#             */
/*   Updated: 2022/09/29 21:53:17 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

t_var	g_var;

static void	print_char(int signal)
{
	if (signal == SIGUSR1)
		g_var.str += (0b00000001 << g_var.bits_shifted);
	if (g_var.bits_shifted == 7)
	{
		ft_putchar_fd(g_var.str, STDOUT_FILENO);
		g_var.str = 0;
		g_var.bits_shifted = 0;
		return ;
	}
	g_var.bits_shifted++;
}

static void	send_signals(void)
{
	signal(SIGUSR1, print_char);
	signal(SIGUSR2, print_char);
	while (1)
		pause();
}

int	main(void)
{
	printf("PID:%d\n", getpid());
	send_signals();
	return (0);
}
