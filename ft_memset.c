/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:42:49 by scardell          #+#    #+#             */
/*   Updated: 2024/01/03 15:47:10 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*a;

	a = b;
	while (len--)
	{
		*a = (char)c;
		a++;
	}
	return (b);
}
//
// En resumen, la función ft_memset copia el byte especificado en la región
// de memoria especificada por b y len, y devuelve un puntero al inicio de
// esta región. Esto es similar a la función estándar memset en C, que también
// se utiliza para llenar una región de memoria con un byte específico.
//
// Declaración de la función:
// void * indica que la función devuelve un puntero genérico.
// ft_memset es el nombre de la función.
// void *b es un puntero genérico al área de memoria que se va a llenar.
// int c es el byte que se va a copiar en la región de memoria.
// size_t len es la longitud en bytes de la región de memoria que se llenará.
//
// Llenado de la memoria:
// 'a' se inicializa como un puntero char que apunta al inicio de la región de 
// memoria b.
// Se utiliza un bucle while para llenar la región de memoria mientras len sea
// mayor que 0.
// En cada iteración, se asigna el valor de c (convertido a char) a la
// dirección de memoria apuntada por a. Luego, se incrementa a para apuntar
// al siguiente byte en la región de memoria, y se reduce len en 1 para
// avanzar al siguiente byte.

/*int main() {
    int size = 15;
	 // Reservamos memoria para un buffer
    char *buffer = (char *)malloc(size * sizeof(char));

    if (buffer == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    ft_memset(buffer, 'A', size); // Llenamos el buffer con el carácter 'A'

    // Imprimimos el contenido del buffer
    printf("Contenido del buffer después de ft_memset: %s\n", buffer);

    free(buffer); // Liberamos la memoria asignada al buffer
    return 0;
}*/