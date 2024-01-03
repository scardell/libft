/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:36:39 by scardell          #+#    #+#             */
/*   Updated: 2024/01/03 18:00:48 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		*ptr++ = '\0';
	}
}
//
//la función ft_bzero llena los primeros n bytes de la región de memoria
// apuntada por s con ceros, estableciendo cada byte a '\0'. Esto puede ser
// útil para inicializar rápidamente una región de memoria (por ejemplo, para
// inicializar un buffer o estructura) antes de utilizarla en tu programa.
// Esta función es similar a la función estándar bzero en C
//
// Declaración de la función:
// void indica que la función no devuelve ningún valor.
// ft_bzero es el nombre de la función.
// void *s es un puntero genérico a la región de memoria que se
// llenará con ceros.
// size_t n es el número de bytes que se establecerán a cero desde la
// dirección de memoria apuntada por s.
//
// Casting del puntero s:
// Se declara un puntero ptr que apunta a
// caracteres no signados (unsigned char).
// Se utiliza un casting para convertir el puntero genérico s en un puntero
// unsigned char para facilitar la manipulación byte a byte de la memoria.
//
// Establecimiento de bytes a cero:
// Se utiliza un bucle while que se ejecuta n veces.
// En cada iteración, se asigna el valor nulo '\0' al byte apuntado por ptr,
// lo que significa que se establece a cero.
// Luego, el puntero ptr se incrementa para apuntar al siguiente byte en
// la región de memoria.
//
/*nt main() {
    int size = 10;
    char *buffer = (char *)malloc(size * sizeof(char));

    if (buffer == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    // Mostramos el contenido inicial del buffer
    printf("Contenido inicial del buffer: %s\n", buffer);

    // Utilizamos ft_bzero para llenar el buffer con ceros
    ft_bzero(buffer, size);

    // Mostramos el contenido después de utilizar ft_bzero
    printf("Contenido del buffer después de ft_bzero: %s\n", buffer);

    free(buffer);
    return 0;
}*/