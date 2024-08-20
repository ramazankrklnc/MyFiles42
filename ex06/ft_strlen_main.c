/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarakil <rkarakil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:54:37 by rkarakil          #+#    #+#             */
/*   Updated: 2024/08/19 18:13:47 by rkarakil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

int	main(void)
{
	char	*message;
	char	str_length[3];
	int		length;

	message = "Hello, world!";
	length = ft_strlen(message);

	str_length[0] = (length / 10) + '0';
	str_length[1] = (length % 10) + '0';
	str_length[2] = '\n';

	write(1, str_length, 3);
	return (0);
}
