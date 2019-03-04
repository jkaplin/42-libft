/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testlib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 08:31:13 by jkaplin           #+#    #+#             */
/*   Updated: 2019/02/21 08:15:37 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTLIB_H
# define TESTLIB_H

#include <string.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

typedef struct	s_fn {
	char	*str;
	int		(*fn)();
}				t_fn;

int		cmp_memset(void *b, int c, size_t len);
int		cmp_bzero(void *s, size_t n);
int		cmp_memcpy(void *dst, const void *src, size_t n);
int		cmp_memccpy(void *dst, const void *src, int c, size_t n);
int		cmp_memmove(void *dst, const void *src, size_t len);
int		cmp_memchr(const void *s, int c, size_t n);
int		cmp_memcmp(const void *s1, const void *s2, size_t n);
int		cmp_strlen(const char *s);
int		cmp_strdup(const char *s1);
int		cmp_strcpy(char *dst, const char *src);
int		cmp_strncpy(char *dst, const char *src, size_t len);
int		cmp_strcat(char *s1, const char *s2);
int		cmp_strncat(char *s1, const char *s2, size_t n);
int		cmp_strlcat(char *dst, const char *src, size_t dstsize);
int		cmp_strchr(const char *s, int c);
int		cmp_strrchr(const char *s, int c);
int		cmp_strstr(const char *haystack, const char *needle);
int		cmp_strnstr(const char *haystack, const char *needle, size_t len);
int		cmp_strcmp(const char *s1, const char *s2);
int		cmp_strncmp(const char *s1, const char *s2, size_t n);
int		cmp_atoi(const char *str);
int		cmp_isalpha(int c);
int		cmp_isdigit(int c);
int		cmp_isalnum(int c);
int		cmp_isascii(int c);
int		cmp_isprint(int c);
int		cmp_toupper(int c);
int		cmp_tolower(int c);

int		cmp_memalloc(size_t size);
int		cmp_memdel(void **ap);
int		cmp_strnew(size_t size);
int		cmp_strdel(char **as);
int		cmp_strclr(char *s);
int		cmp_striter(char *s, void (*f)(char *));
int		cmp_striteri(char *s, void (*f)(unsigned int, char *));
int		cmp_strmap(char const *s, char (*f)(char));
int		cmp_strmapi(char const *s, char (*f)(unsigned int, char));
int		cmp_strequ(char const *s1, char const *s2);
int		cmp_strnequ(char const *s1, char const *s2, size_t n);
int		cmp_strsub(char const *s, unsigned int start, size_t len);
int		cmp_strjoin(char const *s1, char const *s2);
int		cmp_strtrim(char const *s);
int		cmp_strsplit(char const *s, char c);
int		cmp_itoa(int n);
int		cmp_putchar(char c);
int		cmp_putstr(char const *s);
int		cmp_putendl(char const *s);
int		cmp_putnbr(int n);
int		cmp_putchar_fd(char c, int fd);
int		cmp_putstr_fd(char const *s, int fd);
int		cmp_putendl_fd(char const *s, int fd);
int		cmp_putnbr_fd(int n, int fd);

int		cmp_lstnew(void const *content, size_t content_size);
int		cmp_lstdelone(t_list **alst, void (*del)(void *, size_t));
int		cmp_lstdel(t_list **alst, void (*del)(void *, size_t));
int		cmp_lstadd(t_list **alst, t_list *new);
int		cmp_lstiter(t_list *lst, void (*f)(t_list *elem));
int		cmp_lstmap(t_list *lst, t_list *(*f)(t_list *elem));


int		test_memset();
int		test_bzero();
int		test_memcpy();
int		test_memccpy();
int		test_memmove();
int		test_memchr();
int		test_memcmp();
int		test_strlen();
int		test_strdup();
int		test_strcpy();
int		test_strncpy();
int		test_strcat();
int		test_strncat();
int		test_strlcat();
int		test_strchr();
int		test_strrchr();
int		test_strstr();
int		test_strnstr();
int		test_strcmp();
int		test_strncmp();
int		test_atoi();
int		test_isalpha();
int		test_isdigit();
int		test_isalnum();
int		test_isascii();
int		test_isprint();
int		test_toupper();
int		test_tolower();

int		test_memalloc();
int		test_memdel();
int		test_strnew();
int		test_strdel();
int		test_strclr();
int		test_striter();
int		test_striteri();
int		test_strmap();
int		test_strmapi();
int		test_strequ();
int		test_strnequ();
int		test_strsub();
int		test_strjoin();
int		test_strtrim();
int		test_strsplit();
int		test_itoa();
int		test_putchar();
int		test_putstr();
int		test_putendl();
int		test_putnbr();
int		test_putchar_fd();
int		test_putstr_fd();
int		test_putendl_fd();
int		test_putnbr_fd();

int		test_lstnew();
int		test_lstdelone();
int		test_lstdel();
int		test_lstadd();
int		test_lstiter();
int		test_lstmap();


#endif
