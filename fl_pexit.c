/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fl_pexit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:56:53 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/16 15:08:56 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flib.h"

/*Prints an error message and exits the program.*/
void	fl_pexit(char *str)
{
	fl_miniprint("Error: %s\n", str);
	exit(1);
}
