/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_board.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnugroho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 13:32:46 by rnugroho          #+#    #+#             */
/*   Updated: 2017/11/23 13:32:46 by rnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		**ft_init_board(int size)
{
	int **board;
	int i;
	int j;

	i = -1;
	board = (int **)malloc(sizeof(*board) * size);
	while (++i < size)
	{
		j = -1;
		board[i] = (int *)malloc(sizeof(**board) * size);
		while (++j < size)
			board[i][j] = 0;
	}
	return (board);
}

int		*ft_init_array(void)
{
	int i;
	int *arr;

	i = -1;
	arr = (int*)malloc(sizeof(int) * 19);
	while (++i < 19)
		arr[i] = 0;
	return (arr);
}

int		*ft_init_loc(int *loc)
{
	loc[0] = 0;
	loc[1] = 0;
	return (loc);
}

int		*ft_inc_loc(int *loc, int max)
{
	loc[1]++;
	if (loc[1] == max)
	{
		loc[0]++;
		loc[1] = 0;
	}
	return (loc);
}
