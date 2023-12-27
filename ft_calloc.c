/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:36:36 by scardell          #+#    #+#             */
/*   Updated: 2023/12/26 18:23:03 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*buffer;
	size_t	i;

	buffer = (void *)malloc(size * count);
	if (!buffer)
		return (NULL);
	i = 0;
	while (i < (size * count))
	{
		((unsigned char *)buffer)[i] = 0;
		i++;
	}
	return (buffer);
}
/*	ft_bzero(buffer, size * count);
	return (buffer);
}*/
