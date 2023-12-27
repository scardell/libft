/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 07:58:31 by scardell          #+#    #+#             */
/*   Updated: 2023/12/19 10:19:58 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (n > 0 && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main()
{
    const char	*s1 = "test\200";
    const char	*s2 = "test\0";
    size_t	longitud = 6;

    int	resultado = ft_strncmp(cadena1, cadena2, longitud);

    if (resultado == 0) {
        printf("Los primeros %zu caract son iguales.\n", longitud);
    } else if (resultado < 0) {
        printf("Los primeros %zu caract de s1 son menores que s2.\n", longitud);
    } else {
        printf("Los primeros %zu caract de s1 son mayores que s2.\n", longitud);
    }
    return 0;
}*/
