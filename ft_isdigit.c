/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:48:18 by scardell          #+#    #+#             */
/*   Updated: 2024/01/03 13:52:31 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
//
//  se utiliza para determinar si un carácter dado es un dígito.
//
// int indica que la función devuelve un entero.
// ft_isdigit es el nombre de la función.
// int c indica que la función toma un argumento de tipo entero, 
// que se espera sea el valor ASCII de un carácter.
//
// La condición (c >= '0' && c <= '9') verifica si el valor c está dentro del 
// rango de caracteres numéricos ASCII, es decir, si corresponde a un dígito del
// 0 al 9.
// Si c es un dígito, la condición es verdadera y la función devuelve 1,
//  indicando que el carácter es un dígito.
// Si c no está dentro de ese rango, la función devuelve 0, lo que indica que 
// el carácter no es un dígito.

// En resumen, la función ft_isdigit verifica si el valor c corresponde a un 
// dígito (0-9) según su valor ASCII y devuelve 1 si es así, o 0 si no lo es.