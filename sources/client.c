/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 21:17:33 by vkist-si          #+#    #+#             */
/*   Updated: 2022/09/27 22:52:56 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

check_args(char *pid)
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

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr_fd("Invalid arguments\n", 2);
		return (1);
	}
	if (ft_strlen(argv[1]) > 7 || check_args(argv[1]))
	{
		ft_putstr_fd("Invalid PID number\n", 2);
	} 
	return 0 ;
}
