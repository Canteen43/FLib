/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fl_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:35:20 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/16 15:04:29 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flib.h"

// From Libft
char		*ft_strjoin(char const *s1, char const *s2);
void		ft_bzero(void *s, size_t n);

// Helper function
static void	*fl_free_n_ret_null(void *ptr);

/*Gets a fd from a file that needs to be ready to be read from. Returns a
pointer to the string read.*/
char	*fl_readfile(int fd)
{
	char	*str;
	char	*old_str;
	char	buf[BUFFER_SIZE];
	int		read_rt;

	str = malloc(sizeof(char));
	if (str == NULL)
		return (NULL);
	*str = '\0';
	while (1)
	{
		ft_bzero(buf, BUFFER_SIZE);
		read_rt = read(fd, buf, BUFFER_SIZE - 1);
		if (read_rt == -1)
			return (fl_free_n_ret_null(str));
		if (read_rt == 0)
			break ;
		old_str = str;
		str = ft_strjoin(str, buf);
		free(old_str);
		if (str == NULL)
			return (NULL);
	}
	return (str);
}

static void	*fl_free_n_ret_null(void *ptr)
{
	free(ptr);
	return (NULL);
}
