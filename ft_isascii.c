/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:25:43 by scardell          #+#    #+#             */
/*   Updated: 2024/01/03 13:57:49 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	c;

	c = 'i';
	if (ft_isascii(c))
		printf("El caracter pertenece al codigo ascii.\n");
	else
		printf("El caracter no pertenece al codigo ascii.\n");
	return (0);
}*/
//
// En resumen, la función ft_isascii verifica si el valor entero c se encuentra
// dentro del rango de caracteres ASCII estándar (0-127) y devuelve 1 si es así,
// o 0 si no lo es. Esta función puede ser útil para verificar si un carácter
// o valor entero específico es un carácter ASCII válido.
