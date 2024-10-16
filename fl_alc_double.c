/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fl_alc_double.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:53:14 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/16 13:46:22 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flib.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);

int	fl_alc_double(t_alc *arr)
{
	char	*new_head;
	size_t	new_cap;

	new_cap = arr->cap * 2;
	new_head = malloc(new_cap * sizeof(char));
	if (new_head == NULL)
		return (-1);
	ft_memcpy(new_head, arr->head, arr->len);
	free(arr->head);
	arr->head = new_head;
	arr->cap = new_cap;
	return (0);
}
