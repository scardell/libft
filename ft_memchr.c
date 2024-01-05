/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:21:08 by scardell          #+#    #+#             */
/*   Updated: 2023/12/21 09:59:20 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = s;
	while (n-- > 0)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
/*int main() {
    const char str[] = "This is a test string"; // Cadena de prueba
    int search_char = 'a'; // Carácter a buscar en la cadena
    size_t search_len = 10; // Número de bytes a buscar

    void *result = ft_memchr(str, search_char, search_len); 
	// Llamada a la función

    if (result != NULL) {
        printf("posici %ld\n", (unsigned char *)result - (unsigned char *)str);
    } else {
        printf("Caracter no encontrado\n");
    }

    return 0;
}*/