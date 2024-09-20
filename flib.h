/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:16:07 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/15 18:40:38 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLIB_H
# define FLIB_H

# include <limits.h>	// INT_MIN and INT_MAX
# include <stddef.h>	// NULL, size_t
# include <stdarg.h>	// va_list, va_start, va_arg, va_end
# include <unistd.h>	// write
# include <stdlib.h>	// exit
# include <stdlib.h>	// malloc, free

typedef struct s_arraylist_char
{
	char*	head;
	size_t	cap;
	size_t	len;
}	t_alc;

int		f_strtoi(char *str, int *num);
int		f_lmt_check(int value, char next);
void	f_miniprint(char *str, ...);
int		f_alc_add(t_alc *arr, char c);
int		f_alc_double(t_alc *arr);
int		f_alc_init(t_alc *arr, size_t cap);

#endif // FLIB_H