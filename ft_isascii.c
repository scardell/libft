/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:25:43 by scardell          #+#    #+#             */
/*   Updated: 2023/12/12 14:55:19 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	c;

	c = 'i';
	if (ft_isascii(c))
		printf("El caracter pertenece al codigo ascii.\n");
	else
		printf("El caracter no pertenece al codigo ascii.\n");
	return (0);
}*/
