/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_right.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanch <jorsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:12:32 by jorsanch          #+#    #+#             */
/*   Updated: 2022/10/05 22:13:30 by jorsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// los comentarios con // despues de leerlos los borras

/**** * - E s t o s   n o   l o s   b o r r e s - * ***************************
 * Igual que fill_left, pero esta primero rellena con el filling y 
 * luego escribe el imput, de forma que este queda justificado a la derecha
 * ****************************************************************************/

#include "libft.h"


char * ft_fill_right(char *input, char filling, size_t spaces, int plus)
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
	{
		printf("¡ ¡ ¡ f a l l o   e l    m a l l o c ! ! ! ");
		return (str);
	}

	//printf("\ninput: %s + %i +/o %zu --malloc: %zu", input, plus, spaces, j+1);


	j = 0;

	if (input[0] == '-')
	{
		i++;
		str[j] = '-';
		j++;
	}
	else{
	if (plus == 1)
	{
		str[j] = '+';
		j++;
	}
	if (plus == -1)						
	{
		str[j] = ' ';
		j++;
	}

	}
	while ((j + ft_strlen(input)-1) < spaces)
	{
		str[j] = filling;
		j++;
	}

	while (input[i] !=  '\0')
	{
		str[j] = input[i];
		i++;
		j++;
	}

	str[j] = '\0';

	return(str);
}