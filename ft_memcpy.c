/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkchikec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 23:29:15 by hkchikec          #+#    #+#             */
/*   Updated: 2019/04/08 05:40:08 by hkchikec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char		*new_dest;
	const char	*new_src = (const char*)src;

	new_dest = (char *)dst;
	while (n--)
		*(new_dest++) = *(new_src++);
	return (dst);
}
