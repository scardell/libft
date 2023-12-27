/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:49:49 by scardell          #+#    #+#             */
/*   Updated: 2023/12/27 19:46:21 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(const char *s)
{
	int	cont;

	cont = 0;
	while (*s != '\0')
	{
		cont++;
		s++;
	}
	return (cont);
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
