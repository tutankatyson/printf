/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_left.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanch <jorsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:12:32 by jorsanch          #+#    #+#             */
/*   Updated: 2022/10/06 17:40:27 by jorsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// los comentarios con // despues de leerlos los borras

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
	size_t i;							//para movernos por el imput
	size_t j;							//para movernos por str
	char	*str;						//El array que vamos a montar y devolver

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
//	printf("\ninput: %s + %i +/o %zu --malloc: %zu", input, plus, spaces, j+1);


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