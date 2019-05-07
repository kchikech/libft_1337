/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkchikec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 14:55:41 by hkchikec          #+#    #+#             */
/*   Updated: 2019/05/02 14:56:33 by hkchikec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_digits(int num)
{
	int digit_count;

	digit_count = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		digit_count++;
		num /= 10;
	}
	return (digit_count);
}
