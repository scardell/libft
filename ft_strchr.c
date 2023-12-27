/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:08:27 by scardell          #+#    #+#             */
/*   Updated: 2023/12/18 15:46:04 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	while (*str && *str != '\0')
	{
		if (*str == (char)c)
		{
			return ((char *)str);
		}
		str++;
	}
	if (*str == (char)c)
	{
		return ((char *)str);
	}
	return (NULL);
}
/*
int main()
{
    const char *string = "hola mundo";
    char c = '\0';
    char *resultado = ft_strchr(string, c);

    if (resultado != NULL)
	{
        printf("'%c' esta en la posición %ld:\n", c, resultado - string);
    } else {
        printf("El caracter '%c' no esta en: \"%s\"\n", c, string);
    }
    return (0);
}*/
