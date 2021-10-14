/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:17:35 by lyaiche           #+#    #+#             */
/*   Updated: 2021/10/14 16:50:20 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>

int	ft_atoi(const char *num);
void	*ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t elements, size_t len);
int	ft_isalnum(int str);
int	ft_isalpha(int str);
int	ft_isascii(int str);
int	ft_isdigit(int str);
int	ft_isprint(int str);
void	*ft_memchr(const void *s, int c, size_t n);
int	memcmp(const void *s1, const void *s2, size_t n);
void	*memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strchr(const char *str, int c);
char	*strjoin(char const *s1, char const *s2);
size_t	strlcat(char *dst, const char *src, size_t dstsize);
size_t	strlcpy(char *dst, const char *src, size_t dstsize);
int	ft_strlen(const char *str);
int	ft_strncmp(const char *s1, char *s2, size_t n);
char	*strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *str, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int	ft_toupper(int c);
int	ft_toupper(int c);

#endif
