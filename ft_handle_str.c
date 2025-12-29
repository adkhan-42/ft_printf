/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adkhan <adkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 20:21:28 by adkhan            #+#    #+#             */
/*   Updated: 2025/11/23 17:54:14 by adkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_str(va_list ap)
{
	int		char_count;
	int		len;
	char	*str;

	char_count = 0;
	str = va_arg(ap, char *);
	if (str == NULL)
	{
		write(1, "(null)", 6);
		char_count = char_count + 6;
	}
	else
	{
		len = ft_strlen(str);
		ft_putstr_fd(str, 1);
		char_count = char_count + len;
	}
	return (char_count);
}
