/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:19:13 by jfilipe           #+#    #+#             */
/*   Updated: 2020/12/09 13:19:15 by jfilipe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

int		*ft_strcpy(int i, char *dest, char *src)
{
	int n;

	n = 0;
	while (src[n] != '\0')
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	int n;
	char *dest;

	i = 0;
	n = 0;
	if (size <= 0)
		return (0);
	while (i < size)
	{
		n += ft_strlen(strs[i]);
		i++;
	}
	n += size;
	dest = malloc(n);
	if (dest == NULL)
		return (0);
	i = 0;
	n = 0;
	while (n < size)
	{
		i = ft_strcpy(i, dest, strs[n]);
		if ( n < size - 1)
			dest[i] = sep[n];
		else
			dest[i] = '\0';
		n++;
	}
	return (dest);
}
