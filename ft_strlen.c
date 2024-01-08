/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:49:49 by scardell          #+#    #+#             */
/*   Updated: 2024/01/08 11:24:36 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
int main()
{
	char *s;
	int longi;

	s = "my string11";
	longi = ft_strlen(s);
	printf("la longitud de mi string es: %d\n", longi);
	return (0);
}*/
