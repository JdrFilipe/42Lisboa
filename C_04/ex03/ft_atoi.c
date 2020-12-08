/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 11:49:21 by jfilipe           #+#    #+#             */
/*   Updated: 2020/12/07 17:46:49 by jfilipe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		space(char c)
{
	return ((c == '\n' || c == '\t' || c == '\v'
	|| c == '\f' || c == '\r' || c == ' ') ? 1 : 0);
}

int		ft_atoi(char *str)
{
	int sign;
	int numbers;

	sign = 1;
	numbers = 0;
	while (space(*str))
		str++;
	while (*str == '-' || *str == '+')
		sign = (*str++ == '-') ? sign * -1 : sign;
	while (*str >= '0' && *str <= '9')
		numbers = numbers * 10 + (*str++ - '0');
	return (numbers * sign);
}
