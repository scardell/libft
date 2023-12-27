/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:13:06 by scardell          #+#    #+#             */
/*   Updated: 2023/12/19 13:22:32 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*csrc;
	char	*cdst;

	if (src == NULL && dst == NULL)
	{
		return (NULL);
	}
	csrc = (char *)src;
	cdst = (char *)dst;
	i = 0;
	while (n > 0)
	{
		cdst[i] = csrc[i];
		i++;
		n--;
	}
	return (dst);
}
