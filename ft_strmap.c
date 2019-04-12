/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkchikec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 00:32:06 by hkchikec          #+#    #+#             */
/*   Updated: 2019/04/10 23:35:05 by hkchikec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*t;

	i = 0;
	t = (char *)malloc(sizeof(*s));
	if (t == NULL)
		return (NULL);
	while (s[i] && f)
	{
		t[i] = (f(s[i]));
		i++;
	}
	return (t);
}
