/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <yguinio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:53:05 by yguinio           #+#    #+#             */
/*   Updated: 2024/11/22 13:37:26 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/includes/libft.h"
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_putstr_len(char *str);
int		ft_putchar_len(int c);
int		ft_putnbr_len(int n);
char	*ft_uitoa(unsigned int n);
int		ft_putunbr_len(unsigned int n);
int		ft_putnbr_hex_len(unsigned int n);
int		ft_putnbr_hex_len_up(unsigned int n);
int		ft_putptr_len(void *ptr);
int		ft_putnbr_ptr_len(unsigned long long n);
char	*ft_ulitoa_base(unsigned long int n, const char *base);
int		ft_putptr_hex_len(unsigned long int n);
char	*ft_reverse(char *str);

#endif