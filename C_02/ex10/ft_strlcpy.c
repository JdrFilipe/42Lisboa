/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 13:03:45 by jfilipe           #+#    #+#             */
/*   Updated: 2020/12/03 13:04:12 by jfilipe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*i;
	unsigned int	c;

	i = src;
	c = size;
	if (c != 0)
	{
		while (--c != 0)
		{
			if ((*dest++ = *src++) == '\0')
				break ;
		}
	}
	if (c == 0)
	{
		if (size != 0)
			*dest = '\0';
		while (*src++)
			;
	}
	return (src - i - 1);
}
