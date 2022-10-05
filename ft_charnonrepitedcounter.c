/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charcounter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanch <jorsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 22:42:39 by jorsanch          #+#    #+#             */
/*   Updated: 2022/10/03 23:39:37 by jorsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_charnonrepitedcounter(char find, char *str)
{
	int i;
	int count;
	int last;

	last = 0;
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == find && !last)
		{
			count++;
			last = 1;
		}
		else
			last = 0;
		i++;
	}
	return (count);
}
