/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fl_free_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:45:16 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/16 15:07:39 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flib.h"

/*Counter to the ft_split function from Libft. Frees all subarrays and then the
main array.*/
void	fl_free_split(char **ptr)
{
	int	i;

	i = 0;
	if (ptr == NULL)
		return ;
	while (*(ptr + i) != NULL)
	{
		free(*(ptr + i));
		i++;
	}
	free(ptr);
}
