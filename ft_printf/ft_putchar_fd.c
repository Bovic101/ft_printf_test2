/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:51:24 by vodebunm          #+#    #+#             */
/*   Updated: 2024/02/18 05:31:16 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//Function to print single character to the standard output
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
