/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:42:49 by scardell          #+#    #+#             */
/*   Updated: 2024/01/12 09:01:39 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;

	a = b;
	while (len--)
	{
		*a = (unsigned char)c;
		a++;
	}
	return (b);
}
