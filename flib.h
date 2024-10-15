/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flib.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:16:07 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/14 10:06:26 by kweihman         ###   ########.fr       */
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

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif // BUFFER_SIZE

typedef struct s_arraylist_char
{
	char*	head;
	size_t	cap;
	size_t	len;
}	t_alc;

int		fl_strtoi(char *str, int *num);
int		fl_lmt_check(int value, char next);
int		fl_alc_add(t_alc *arr, char c);
int		fl_alc_double(t_alc *arr);
int		fl_alc_init(t_alc *arr, size_t cap);
void	fl_miniprint(char *str, ...);
void	fl_free_split(char **ptr);
void	fl_pexit(char *str);
char	*fl_readfile(int fd);


#endif // FLIB_H