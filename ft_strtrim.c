/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:28:27 by scardell          #+#    #+#             */
/*   Updated: 2024/01/08 14:00:24 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*strr;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	len = ft_strlen(s1) -1;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	if (i == len + 1)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[len]))
		len--;
	strr = ft_substr(s1, i, len - i + 1);
	if (!strr)
		return (NULL);
	return (strr);
}
