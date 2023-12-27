/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 08:23:06 by scardell          #+#    #+#             */
/*   Updated: 2023/12/20 08:26:10 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*lposit;

	lposit = NULL;
	while (*str && *str != '\0')
	{
		if (*str == (char)c)
		{
			lposit = str;
		}
		str++;
	}
	if (*str == (char)c)
	{
		return ((char *)str);
	}
	return ((char *)lposit);
}
/*
int	main(void)
{
	char	string[] = "Esta es mi cadena";
	char	letter = 's';
	char	*position;

	position = ft_strrchr(string, letter);
	if (position != NULL)
		printf("Last position of '%c' is: %ld\n", letter, position - string);
	else
		printf("Letter not found");
	return (0);
}*/
