/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 08:45:49 by scardell          #+#    #+#             */
/*   Updated: 2024/01/03 13:00:36 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
// se utiliza para verificar si un carácter dado es una letra del alfabeto.
// int indica que la función devuelve un entero.
// ft_isalpha es el nombre de la función.
// int c indica que la función toma un argumento de tipo entero,
// que se espera sea el valor ASCII de un carácter.
//
//La condición ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) verifica
//si el valor c se encuentra dentro del rango de los caracteres alfabéticos 
//en mayúsculas ('A' a 'Z') o en minúsculas ('a' a 'z').
//
//Si c está dentro de alguno de esos rangos, la condición es verdadera y 
//la función devuelve 1, indicando que el carácter es una letra del alfabeto.
//
//Si c no está en ninguno de esos rangos, la función devuelve 0, lo que indica
// que el carácter no es una letra del alfabeto.
//
// En resumen, la función ft_isalpha verifica si el valor c corresponde a una 
// letra del alfabeto (mayúscula o minúscula) según su valor ASCII y 
// devuelve 1 si es así, o 0 si no lo es.