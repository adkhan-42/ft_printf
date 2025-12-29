/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adkhan <adkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 20:21:17 by adkhan            #+#    #+#             */
/*   Updated: 2025/11/23 19:38:47 by adkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_ptr(va_list ap)
{
	int					char_count;
	int					len;
	unsigned long long	ptr_val;
	char				*str;

	char_count = 0;
	ptr_val = va_arg(ap, unsigned long long);
	str = (char *)ft_utoa_base(ptr_val, "0123456789abcdef");
	write(1, "0x", 2);
	len = ft_strlen(str) + 2;
	ft_putstr_fd(str, 1);
	char_count = len + char_count;
	free(str);
	return (char_count);
}
