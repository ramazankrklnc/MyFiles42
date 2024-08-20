/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab_main.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarakil <rkarakil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:25:13 by rkarakil          #+#    #+#             */
/*   Updated: 2024/08/19 18:47:11 by rkarakil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *arr, int length)
{
	int	i;
	int	j;
	int	temp;
	int	swapped;

	i = 0;
	while (i < length - 1)
	{
		j = 0;
		swapped = 0;
		while (j < length - 1 - i)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swapped = 1;
			}
			j++;
		}
		if (!swapped)
			break ;
		i++;
	}
}

int	main(void)
{
	int	arr[6] = {5, 2, 9, 1, 5, 6};
	int	length;
	int	i;

	length = sizeof(arr) / sizeof(arr[0]);
	ft_sort_int_tab(arr, length);
	i = 0;
	while (i < length)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	return (0);
}
