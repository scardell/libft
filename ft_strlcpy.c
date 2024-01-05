/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 08:23:49 by scardell          #+#    #+#             */
/*   Updated: 2023/12/20 10:25:18 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (dstsize == 0)
		return (src_len);
	while (i < dstsize -1 && src[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
/*
int main() {
    char src[] = "Hello, world!"; // Cadena de origen
    char dst[20]; // Cadena de destino
    size_t copied_len;

    copied_len = ft_strlcpy(dst, src, sizeof(dst)); // Llamada a la función

    printf("Cadena copiada: %s\n", dst);
    printf("Longitud de la cadena copiada: %zu\n", copied_len);

    return 0;
}
*/