/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adkhan <adkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 20:20:28 by adkhan            #+#    #+#             */
/*   Updated: 2025/11/23 17:53:33 by adkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_char(va_list ap)
{
	int	char_count;

	char_count = 0;
	ft_putchar_fd(va_arg(ap, int), 1);
	char_count++;
	return (char_count);
}
