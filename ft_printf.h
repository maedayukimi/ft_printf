/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawako <maedayukimi@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:12:46 by mawako            #+#    #+#             */
/*   Updated: 2024/10/19 11:55:52 by mawako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>

int		ft_string(char *s);
void	ft_unsigned(unsigned int n, int *t);
void	ft_putnbr(int n, int *t);
void	ft_putchar(char c);
int		ft_hex(unsigned int n, char c);
int		ft_address(unsigned long int n, char c);

#endif
