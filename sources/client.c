/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 21:17:33 by vkist-si          #+#    #+#             */
/*   Updated: 2022/09/28 21:54:44 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

/* int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (2048);
	return (0);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
 */

static int	check_args(char *pid)
{
	int i;
	
	i = 0;
	while (pid[i])
	{
		if (ft_isdigit(pid[i]))
			i++;
		else
			return 1;
	}
	return 0;
}

static void send_message(int pid, char *msg)
{
	int	i;
	int bits_counter;

	i = 0;
	while (msg[i] != '\0')
	{
		bits_counter = 0;
		while (bits_counter < 8)
		{
			if ((msg[i] >> bits_counter) & 0b00000001)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			bits_counter++;
			usleep(500);
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putstr_fd("Invalid arguments\n", 2);
		return (1);
	}
	if (ft_strlen(argv[1]) > 7 || check_args(argv[1]))
	{
		ft_putstr_fd("Invalid PID number\n", 2);
		return (1);
	} 
	send_message(ft_atoi(argv[1]), argv[2]);
	return 0 ;
}
