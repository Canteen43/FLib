/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_miniprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:01:19 by kweihman          #+#    #+#             */
/*   Updated: 2024/09/19 00:01:19 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flib.h"

void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);

void	f_miniprint(char *str, ...)
{
	va_list	args;
	char	*string;

	va_start(args, str);
	while (*str != '\0')
	{
		if (*str == '%' && *(str + 1) != '\0')
		{
			str++;
			if (*str == 'd')
				ft_putnbr_fd(va_arg(args, int), 1);
			else if (*str == 's')
			{
				string = va_arg(args, char *);
				if (string == NULL)
					write(1, "(null)", 6);
				ft_putstr_fd(string, 1);
			}
		}
		else
			write(1, str, 1);
		str++;
	}
	va_end(args);
}