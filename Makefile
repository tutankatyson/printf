# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jorsanch <jorsanch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 20:59:38 by jorsanch          #+#    #+#              #
#    Updated: 2022/10/06 17:35:45 by jorsanch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MYLIBS = ""


	printf("\n\n123456789abcdef");
	printf("\n%s",ft_fill_left("423456789", '0', 15, 0));printf("EOL");
	printf("\n%s",ft_fill_left("423456789", '0', 15, -1));printf("EOL");
	printf("\n%s",ft_fill_left("423456789", '0', 15, 1));printf("EOL");

	printf("\n\n123456789abcdef");
	printf("\n%s",ft_fill_left("42" ,'0', 4, 0));printf("EOL");
	printf("\n%s",ft_fill_left("42" ,'0', 4, -1));printf("EOL");
	printf("\n%s",ft_fill_left("42" ,'0', 4, 1));printf("EOL");
	printf("\n%s",ft_fill_left("-42",'0', 4, 0));printf("EOL");
	printf("\n%s",ft_fill_left("-42",'0', 4, -1));printf("EOL");
	printf("\n%s",ft_fill_left("-42",'0', 4, 1));printf("EOL");


	printf("\n\n123456789abcdef");
	printf("\n%s",ft_fill_left("42", '0', 6, 0));printf("EOL");
	printf("\n%06i\n",42);
	printf("\n%s",ft_fill_left("42", '0', 6, -1));printf("EOL");
	printf("\n% 06i\n",42);
	printf("\n%s",ft_fill_left("42", '0', 6, 1));printf("EOL");
	printf("\n%+06i\n",42);
	printf("\n%s",ft_fill_left("-42", '0', 6, 0));printf("EOL");
	printf("\n%06i\n",-42);
	printf("\n%s",ft_fill_left("-42", '0', 6, -1));printf("EOL");
	printf("\n% 06i\n",-42);
	printf("\n%s",ft_fill_left("-42", '0', 6, 1));printf("EOL");
	printf("\n%+06i\n",-42);

	printf("\n\n123456789abcdef");
	printf("\n%s",ft_fill_left("42", '0', 6, 0));printf("EOL");
	printf("\n%s",ft_fill_left("42", '0', 6, -1));printf("EOL");
	printf("\n%s",ft_fill_left("42", '0', 6, 1));printf("EOL");
	printf("\n%s",ft_fill_left("-42",'0', 6, 0));printf("EOL");
	printf("\n%s",ft_fill_left("-42",'0', 6, -1));printf("EOL");
	printf("\n%s",ft_fill_left("-42",'0', 6, 1));printf("EOL");

	printf("\n\n123456789abcdef");
	printf("\n%s",ft_fill_left("11001100", '0', 4, 0));printf("EOL");
	printf("\n%s",ft_fill_left("11001100", '0', 4, -1));printf("EOL");
	printf("\n%s",ft_fill_left("11001100", '0', 4, 1));printf("EOL");