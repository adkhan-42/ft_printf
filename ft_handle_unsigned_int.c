/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_unsigned_int.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adkhan <adkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 20:21:37 by adkhan            #+#    #+#             */
/*   Updated: 2025/11/23 17:54:20 by adkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_uint(va_list ap)
{
	int		char_count;
	int		len;
	char	*str;

	char_count = 0;
	str = (char *)ft_utoa_base(va_arg(ap, unsigned int), "0123456789");
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	char_count = char_count + len;
	free(str);
	return (char_count);
}
