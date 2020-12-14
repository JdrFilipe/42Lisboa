/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:18:17 by jfilipe           #+#    #+#             */
/*   Updated: 2020/12/09 13:18:21 by jfilipe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *str;
	int i;

	i = 0;
	str = malloc(sizeof(int) * (max - min));
	if (min >= max)
		return (0);
	while(min < max)
	{
		str[i] = min;
		min++;
		i++;
	}
	return (str);
}
