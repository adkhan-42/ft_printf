/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dispatcher.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adkhan <adkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 20:20:16 by adkhan            #+#    #+#             */
/*   Updated: 2025/11/23 17:53:27 by adkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	dispatcher(char c, va_list ap)
{
	int	char_count;

	char_count = 0;
	if (c == 'c')
		char_count = ft_handle_char(ap);
	else if (c == 's')
		char_count = ft_handle_str(ap);
	else if (c == 'p')
		char_count = ft_handle_ptr(ap);
	else if (c == 'u')
		char_count = ft_handle_uint(ap);
	else if (c == 'd' || c == 'i')
		char_count = ft_handle_int(ap);
	else if (c == 'x')
		char_count = ft_handle_hex_lower(ap);
	else if (c == 'X')
		char_count = ft_handle_hex_upper(ap);
	else if (c == '%')
		char_count = ft_handle_percent(ap);
	return (char_count);
}
