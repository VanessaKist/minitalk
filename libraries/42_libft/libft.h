/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 14:46:04 by coder             #+#    #+#             */
/*   Updated: 2022/10/21 18:34:50 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>

int		ft_atoi(const char *c);
void	ft_bzero(void *s, size_t len);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_itoa(int nb);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *d, const char *s, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *str, int c);
char	*ft_strtrim(char const *s, char const *set);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_substr(char const *str, unsigned int start, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_splitlen(char **split);
void	ft_matrixfree(void **matrix);
void	ft_pointerfree(void *pointer);
int		ft_htoi(char s[]);
int		ft_printf(const char *str, ...);
int		ft_char_conv(const char *str, int len, va_list arg);
int		ft_int_conv(int len, va_list arg);
int		ft_intlen(unsigned long i, int base);
int		ft_ptr_conv(int len, va_list arg);
void	ft_putbase(unsigned long num, char *base);
int		ft_str_conv(int len, va_list arg);
int		ft_unsg_conv(const char *str, int len, va_list arg);

#endif