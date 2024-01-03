/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:59:46 by scardell          #+#    #+#             */
/*   Updated: 2024/01/03 14:01:54 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
		return (0);
}
/*
int	main(void)
{
	int	c;

	c = 127;
	if (ft_isprint(c))
		printf("Es un caracter imprimible.\n");
	else
		printf("no es un caracter imprimible.\n");
	return (0);
}*/
//
// En resumen, la función ft_isprint verifica si el valor entero c se encuentra
// dentro del rango de caracteres imprimibles en la tabla ASCII estándar 
// (valores del 32 al 126) y devuelve 1 si es así, o 0 si no lo es. 
// Esto puede ser útil para determinar si un carácter específico es imprimible
// y, por lo tanto, puede mostrarse en pantalla.
