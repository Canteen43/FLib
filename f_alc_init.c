/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_alc_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:59:27 by kweihman          #+#    #+#             */
/*   Updated: 2024/09/19 15:59:27 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flib.h"

int		f_alc_init(t_alc *arr, size_t cap)
{
	arr->head = malloc(cap * sizeof(char));
	if (arr->head == NULL)
		return (-1);
	arr->cap = cap;
	arr->len = 0;
	return (0);
}
