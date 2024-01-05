/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:36:09 by scardell          #+#    #+#             */
/*   Updated: 2023/12/20 11:29:50 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = 0;
	dst_len = 0;
	while (dst[dst_len] && dst_len < dstsize)
		dst_len++;
	while (src[src_len] && (dst_len + src_len + 1) < dstsize)
	{
		dst[dst_len + src_len] = src[src_len];
		++src_len;
	}
	if (dst_len < dstsize)
		dst[dst_len + src_len] = '\0';
	while (src[src_len])
		++src_len;
	return (dst_len + src_len);
}
/*int main() {
    char dst[20] = "Hello, "; // Cadena de destino inicial
    char src[] = "world!"; // Cadena de origen

    size_t result_len = ft_strlcat(dst, src, sizeof(dst)); 
	// Concatenación utilizando la función

    printf("Cadena concatenada: %s\n", dst);
    printf("Longitud de la cadena concatenada: %zu\n", result_len);

    return 0;
}*/