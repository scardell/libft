/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:13:06 by scardell          #+#    #+#             */
/*   Updated: 2024/01/03 18:21:39 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*csrc;
	char	*cdst;

	if (!src && !dst)
	{
		return (NULL);
	}
	csrc = (char *)src;
	cdst = (char *)dst;
	i = 0;
	while (n--)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (dst);
}
//
// ft_memcpy, se utiliza para copiar un bloque de memoria desde una ubicación
// de origen (src) a una ubicación de destino (dst) con una
// longitud específica (n).
//
// Declaración de la función:
// void * indica que la función devuelve un puntero genérico.
// ft_memcpy es el nombre de la función.
// void *dst es un puntero a la ubicación de destino donde se
// copiarán los datos.
// const void *src es un puntero constante a la ubicación de
// origen desde donde se copiarán los datos.
// size_t n es la cantidad de bytes que se copiarán desde src a dst.
//
// Comprobación de validez de punteros:
// Esta parte verifica si los punteros src y dst son nulos. Si ambos son nulos,
// la función devuelve NULL indicando un caso de error o una situación inválida.
//
// Copia de datos byte a byte:
// Se realizan conversiones de tipo para tratar los punteros src y dst como
//  punteros a caracteres (char *).
// Se inicializa un contador i en 0 para llevar un seguimiento de la posición
//  actual en los bloques de memoria.
// Utilizando un bucle while que itera mientras n sea mayor que cero, se copian
// los bytes individuales desde la ubicación de src a la
// ubicación de dst byte a byte.
// En cada iteración, se copia un byte desde la ubicación src[i] a la ubicación
// dst[i], y luego se incrementa i para pasar al siguiente byte.
//
// Retorno del puntero de destino (dst):
// La función devuelve un puntero a la ubicación de destino (dst) después de
// que se hayan copiado los datos.
/*int main() {
    const char src[] = "Copying this string!";
    char dest[50]; // Destination buffer

    // Using ft_memcpy to copy data from src to dest
    ft_memcpy(dest, src, sizeof(src));

    // Printing the copied string in destination buffer
    printf("Copied string: %s\n", dest);

    return 0;
}*/