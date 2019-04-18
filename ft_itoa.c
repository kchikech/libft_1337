/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkchikec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 21:36:01 by hkchikec          #+#    #+#             */
/*   Updated: 2019/04/18 02:52:14 by hkchikec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_digits(int num)
{
	int digit_count = 0;

	if (num == 0)
		return (1);
	while(num > 0)
	{
		digit_count++;
		num /= 10;
	}
	return (digit_count);
}


char	*ft_itoa(int num)
{
	char *str;
	int digit_count = 0;

	if (num == 0)
		return (ft_strdup("0"));
	if (num == -2147483648)
		return (ft_strdup("-2147483648"));
	if (num < 0)
	{
		num = -1 * num;
		digit_count++;
	}
	digit_count += count_digits(num);   
	if(!(str = (char *)malloc(sizeof(char) * (digit_count + 1))))
		return(NULL);
	str[digit_count] = '\0';
	if (num == -0)
	{
		str[digit_count--] = '0';
		return (str);
	}
	while(num > 0)
	{
		str[digit_count - 1] = num % 10 + '0';
		num = num / 10;
		digit_count--;
	}
	if (digit_count == 1)
		str[0] = '-';
	return (str);
}
