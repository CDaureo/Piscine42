/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdaureo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:03:31 by cdaureo-          #+#    #+#             */
/*   Updated: 2024/09/30 18:35:20 by cdaureo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <string.h>
# include <fcntl.h>


int	ft_strlen(char *str);
int ft_isalnum(int c);
int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isascii (int c);
int ft_isprint (int c);
int ft_toupper (int c);
int ft_tolower (int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memset(void *destination, int value, size_t num_size);
void *ft_bzero(void *destination, size_t num_size);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
char *ft_strchr(const char *s, int c);
char *ft_strrchr (const char *s, int c);
char *ft_strnstr(const char *big, const char *little, size_t len);
size_t ft_strlcpy(char *dst, const char *src, size_t n);
size_t ft_strlcat(char *dst, const char *src, size_t n);
int ft_atoi(const char *nptr);
void *ft_calloc(size_t nmemb, size_t size);
char *ft_strdup(const char *s);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri (char *s, void (*f)(unsigned int, char*));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
#endif