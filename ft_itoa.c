/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:26:45 by scardell          #+#    #+#             */
/*   Updated: 2024/01/12 15:53:02 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lennum(long int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count++;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int			len;
	long int	ln;
	char		*buffer;

	ln = n;
	len = ft_lennum(ln);
	buffer = malloc(sizeof(char) * (len + 1));
	if (!buffer)
		return (NULL);
	buffer[len] = '\0';
	if (ln == 0)
		buffer[0] = '0';
	if (ln < 0)
	{
		buffer[0] = '-';
		ln = ln * -1;
	}
	while (ln > 0)
	{
		buffer[--len] = ln % 10 + '0';
		ln /= 10;
	}
	return (buffer);
}
