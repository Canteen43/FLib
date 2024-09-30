/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_free_split.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:45:16 by kweihman          #+#    #+#             */
/*   Updated: 2024/09/30 17:46:07 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	f_free_split(char **ptr)
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
