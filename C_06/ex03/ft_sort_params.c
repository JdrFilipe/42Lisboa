/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:27:44 by jfilipe           #+#    #+#             */
/*   Updated: 2020/12/08 12:27:46 by jfilipe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
void swap(char *str1, char *str2)
{
	char *str;

	str = str1;
	str1 = str2; 
	str2 = str;
}

int main(int argc, char *argv[])
{
	argc = 5;
	printf ("%s\n%s", argv[1], argv[2]);
	swap(argv[1], argv[2]);
	printf ("%s\n%s", argv[1], argv[2]);

}