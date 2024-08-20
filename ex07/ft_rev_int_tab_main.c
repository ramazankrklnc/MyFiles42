/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarakil <rkarakil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:14:33 by rkarakil          #+#    #+#             */
/*   Updated: 2024/08/19 18:21:30 by rkarakil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *arr, int length)
{
	int	i;
	int	temp;

	i = 0;
	while (i < length / 2)
	{
		temp = arr[i];
		arr[i] = arr[length - 1 - i];
		arr[length - 1 - i] = temp;
		i++;
	}
}

int	main(void)
{
	int	length;
	int	i;
	int	arr[5] = {1, 2, 3, 4, 5};

	length = sizeof(arr) / sizeof(arr[0]);

	ft_rev_int_tab(arr, length);

	i = 0;
	while (i < length)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");

	return (0);
}
