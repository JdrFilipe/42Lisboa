/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 13:11:49 by jfilipe           #+#    #+#             */
/*   Updated: 2020/12/03 13:11:53 by jfilipe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_isnegative(char str, char *hexa)
{
	int temp1;

	temp1 = str;
	write(1, "\\", 1);
	if (temp1 < 0)
	{
		temp1 = str + 256;
		write(1, &hexa[temp1 / 16], 1);
		write(1, &hexa[temp1 % 16], 1);
	}
	else
	{
		write(1, &hexa[temp1 / 16], 1);
		write(1, &hexa[temp1 % 16], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hexa;

	i = 0;
	hexa = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 127)
		{
			ft_isnegative(str[i], hexa);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
