/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:49:49 by scardell          #+#    #+#             */
/*   Updated: 2024/01/03 14:14:32 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(const char *s)
{
	int	cont;

	cont = 0;
	while (*s && *s != '\0')
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
//
// la función ft_strlen calcula la longitud de la cadena de caracteres s
// contando el número de caracteres presentes antes del carácter nulo '\0'
// que marca el final de la cadena, y devuelve este valor como un entero.