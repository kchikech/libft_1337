/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkchikec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 18:50:02 by hkchikec          #+#    #+#             */
/*   Updated: 2019/04/20 15:50:16 by hkchikec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(char const *s, char c)
{
	int i;
	int count;

	count = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c))
			count++;
		i++;
		if (s[i] == '\0' && s[i - 1] != c)
			return (count + 1);
	}
	return (count);
}

char    **ft_strsplit(char const *s, char c)
{
	char    **tab;
	int     i;
	int     start;
	int     j;
	int     wd;

	wd = ft_count_words((char *)s, c);
	i = 0;
	j = 0;
	tab = (char **)malloc(sizeof(char *) * (wd + 1));
	if (tab == NULL)
		return (NULL);
	while (j < wd)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		tab[j++] = ft_strsub((char *)s, start, (i - start));
	}
	tab[j] = NULL;
	return (tab);
}
