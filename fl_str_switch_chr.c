/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fl_str_switch_chr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 07:37:10 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/16 13:48:38 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flib.h"

/*Iterates through a string str and replaces all occurences of char old with
char new.*/
void	fl_str_switch_chr(char *str, char old, char new)
{
	while (*str)
	{
		if (*str == old)
			*str = new;
		str++;
	}
}
