/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:35:20 by scardell          #+#    #+#             */
/*   Updated: 2024/01/08 13:04:23 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*strb;

	if (!s1 || !s2)
		return (NULL);
	strb = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!strb)
		return (NULL);
	i = 0;
	while (*s1)
		strb[i++] = *s1++;
	while (*s2)
		strb[i++] = *s2++;
	strb[i] = '\0';
	return (strb);
}
