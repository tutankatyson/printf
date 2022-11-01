/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_ft_fill_left.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanch <jorsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:12:32 by jorsanch          #+#    #+#             */
/*   Updated: 2022/10/10 13:17:21 by jorsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**** * - E s t o s   n o   l o s   b o r r e s - * ***************************
 * Esta funcion y su gemela fill_right reciben el valor de una variable 
 * en un string llamado "input"
 * Tambien reciben un caracter (0 o espacio), y un numero "spaces"
 * la funcion escribe el input y rellena con el caracter "filling" hasta
 * cubrir los espacios indicados por "spaces"
 * Si el imput ocupa más que spaces, entonces retorna el imput.
 * 
 * A efectos prácticos esto con la llamada adecuada gestiona 
 * los flags: (+, 0 y/o cualquier número)
 * 
 * El return de esta función tiene ya el formato final a imprimir
 * por lo que el return es un puntero a memoria alocada con el txt 
 * ****************************************************************************/

#include "libft.h"

char * ft_fill_left(char *input, char filling, size_t spaces, int plus)
{
	size_t i;
	size_t j;
	char	*str;

	i = 0;
	j = ft_strlen(input);
	str = NULL;
	if (j < spaces)
		j = spaces;
	if (input[i] != '-' && plus != 0 && ft_strlen(input) >= spaces)
		j++;
	str = (char *)malloc((j + 1) * sizeof(char));
	if(!str)
		return (str);
	j = 0;
	if (plus == 1)
	{
		if(input[i] != '-')
		{
			str[j] = '+';
			j++;
		}
	}
	if (plus == -1)						
	{
		if(input[i] != '-')
		{
			str[j] = filling;
			j++;
		}
	}
	while (input[i] !=  '\0')
	{
		str[j] = input[i];
		i++;
		j++;
	}
	while (j < spaces)
	{
		str[j] = filling;
		j++;
	}
	str[j] = '\0';
	return(str);
}