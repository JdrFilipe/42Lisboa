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

#include <unistd.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *str = malloc(max - min);

	if (min >= max)
		return (0);
	while(min < max)
	{
		*str = min;
		min++;
	}
	return (str);
}

int main()
{
	int j;
	int *atp;
	
	printf("%s\n", ft_range(1, 10));
	while(*atp)
	{
		j = *atp +48;
		write(1, &j, 1);
		atp++;
	}
}