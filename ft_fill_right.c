/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_right.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanch <jorsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:12:32 by jorsanch          #+#    #+#             */
/*   Updated: 2022/10/05 20:56:35 by jorsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// los comentarios con // despues de leerlos los borras

/**** * - E s t o s   n o   l o s   b o r r e s - * ***************************
 * Igual que fill_left, pero esta primero rellena con el filling y 
 * luego escribe el imput, de forma que este queda justificado a la derecha
 * ****************************************************************************/

#include "libft.h"


char * ft_fill_right(char *input, char filling, int spaces, int plus)
{
	size_t i;							//para movernos por el imput
	size_t j;							//para movernos por str
	char	*str;						//El array que vamos a montar y devolver

	i = 0;
	j = ft_strlen(input);
	str = NULL; 
	
	if (j < spaces)
		j = spaces;
	if (input[i] != '-' && plus != 0 && ft_strlen(input) == spaces)
		j++;

	str = (char *)malloc((j + 1) * sizeof(char));
	if(!str)
		return (str);

	j = 0;
	if (plus == 1)						//En caso del flag + 		 	plus = 1
	{									//con el flag "spacio" 			plus = -1
		if(input[i] != '-')				//Si no es negativo escribe un + en str[0]
		{
			str[j] = '+';
			j++;						//Avanza str para no pisar el +
		}
	}
	if (plus == -1)						
	{									//con el flag "spacio" 			plus = -1
		if(input[i] != '-')				//Si no es negativo escribe un ' ' en str[0]
		{
			str[j] = filling;
			j++;						//Avanza str para no pisar el +
		}
	}

	while (input[i] !=  '\0')			//Va copiando input en str
	{
		str[j] = input[i];
		i++;
		j++;
	}
	while (j < spaces)					//rellena lo que quede de str con el char filling
	{
		str[j] = filling;
		j++;
	}
	str[j] = '\0';

	return(str);
}