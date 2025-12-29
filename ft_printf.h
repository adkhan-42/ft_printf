/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adkhan <adkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 20:22:35 by adkhan            #+#    #+#             */
/*   Updated: 2025/11/23 17:55:24 by adkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

char	*ft_utoa_base(unsigned long long n, char *base_charset);
char	*ft_itoa(int n);
int		ft_handle_int(va_list ap);
int		ft_handle_str(va_list ap);
int		ft_handle_uint(va_list ap);
int		ft_handle_char(va_list ap);
int		ft_handle_ptr(va_list ap);
int		ft_handle_hex_lower(va_list ap);
int		ft_handle_hex_upper(va_list ap);
int		ft_handle_percent(va_list ap);
int		dispatcher(char c, va_list ap);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t dsize);
char	*ft_strdup(const char *s);
int		ft_printf(const char *format, ...);

#endif
