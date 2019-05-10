/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkchikec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 04:20:49 by hkchikec          #+#    #+#             */
/*   Updated: 2019/05/09 23:41:54 by hkchikec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef	struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;
size_t			ft_strlen(const char *s);
int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
char			*ft_strcat(char *dest, char *src);
int				ft_strcmp(char *s1, char *s2);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strdup(char *src);
size_t			ft_strlcat(char *dest, char *src, size_t size);
char			*ft_strncat(char *dest, char *src, size_t n);
int				ft_strncmp(char *s1, char *s2, size_t n);
char			*ft_strncpy(char *dest, char *src, size_t n);
int				ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_strstr(char *str, char *to_find);
void			*ft_memset(void *b, int c, size_t len);
size_t			ft_strlcat(char *dest, char *src, size_t size);
int				ft_isdigit(int c);
char			*ft_strnstr(char *str, char *to_find, int len);
int				ft_isalnum(int c);
char			*ft_strchr(const char *s, int c);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
char			*ft_strrchr(const char *s, int c);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char	(*f)(unsigned int, char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
void			ft_putchar(char c);
void			ft_putstr(char const *s);
void			ft_putendl(char const *s);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr(int n);
void			ft_putnbr_fd(int n, int fd);
char			**ft_strsplit(char const *s, char c);
char			*ft_itoa(int num);
t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
size_t			ft_count_words(char const *s, char c);
int				count_digits(int num);
int				ft_islower(char c);
int				ft_isupper(char c);
#endif
