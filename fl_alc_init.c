/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fl_alc_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:59:27 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/16 15:06:38 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flib.h"

/*Initializes the character arraylist. Returns -1 on Error and 0 on Success.*/
int	fl_alc_init(t_alc *arr, size_t cap)
{
	arr->head = malloc(cap * sizeof(char));
	if (arr->head == NULL)
		return (-1);
	arr->cap = cap;
	arr->len = 0;
	return (0);
}
