/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fl_alc_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:50:10 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/16 13:46:08 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flib.h"

int	fl_alc_add(t_alc *arr, char c)
{
	if (arr->len == arr->cap)
		if (fl_alc_double(arr) == -1)
			return (-1);
	arr->head[arr->len] = c;
	arr->len++;
	return (0);
}
