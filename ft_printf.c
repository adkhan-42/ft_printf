/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adkhan <adkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 20:21:48 by adkhan            #+#    #+#             */
/*   Updated: 2025/11/23 17:54:33 by adkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		char_count;
	int		i;
	va_list	ap;

	char_count = 0;
	i = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			ft_putchar_fd(format[i], 1);
			char_count++;
		}
		else
		{
			i++;
			char_count += dispatcher(format[i], ap);
		}
		i++;
	}
	va_end(ap);
	return (char_count);
}
