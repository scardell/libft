/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:49:37 by scardell          #+#    #+#             */
/*   Updated: 2023/12/26 16:59:35 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *sh, const char *sn, size_t len)
{
	size_t	n;
	size_t	h;

	h = 0;
	if (!*sn)
		return ((char *)sh);
	n = 0;
	while (sh[h] && n < len)
	{
		if (sh[n] == sn[0])
		{
			while (sh[n + h] && sn[h] && sh[n + h] == sn[h] && (n + h) < len)
			{
				if (sn[h + 1] == '\0')
					return ((char *)&sh[n]);
				h++;
			}
		}
		n++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	s1[] = "hola";
	const char	s2[] = "ho";
	size_t		len = 8;

	printf("%s\n", ft_strnstr(s1, s2, len));
	return (0);
}*/
// ((char *)(s1 + n)) equivale a (char *)&s1[n]) un puntero a la
// direccion n de la cadena 's1'
