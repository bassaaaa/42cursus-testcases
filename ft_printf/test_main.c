/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsito <tsito@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 16:16:29 by tsito             #+#    #+#             */
/*   Updated: 2026/05/03 17:47:51 by tsito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char	*null_str;
	int		ret_printf;
	int		ret_ft_printf;

	null_str = 0;
	printf("---- c ----\nprintf   | ");
	ret_printf = printf("[ %c %c %c ]\n", 'A', '0', '~');
	printf("ret: %d\nft_printf| ", ret_printf);
	fflush(stdout);
	ret_ft_printf = ft_printf("[ %c %c %c ]\n", 'A', '0', '~');
	printf("ret: %d\n\n", ret_ft_printf);

	printf("---- s ----\nprintf   | ");
	ret_printf = printf("[ %s %s ]\n", "hello", "world");
	printf("ret: %d\nft_printf| ", ret_printf);
	fflush(stdout);
	ret_ft_printf = ft_printf("[ %s %s ]\n", "hello", "world");
	printf("ret: %d\n\n", ret_ft_printf);

	printf("---- s NULL ----\nprintf   | ");
	ret_printf = printf("[ %s ]\n", null_str);
	printf("ret: %d\nft_printf| ", ret_printf);
	fflush(stdout);
	ret_ft_printf = ft_printf("[ %s ]\n", null_str);
	printf("ret: %d\n\n", ret_ft_printf);

	printf("---- p NULL ----\nprintf   | ");
	ret_printf = printf("[ %p %p ]\n", (void *)NULL, (void *)0);
	printf("ret: %d\nft_printf| ", ret_printf);
	fflush(stdout);
	ret_ft_printf = ft_printf("[ %p %p ]\n", (void *)NULL, (void *)0);
	printf("ret: %d\n\n", ret_ft_printf);

	printf("---- p small ----\nprintf   | ");
	ret_printf = printf("[ %p %p %p %p ]\n",
			(void *)1, (void *)15, (void *)16, (void *)17);
	printf("ret: %d\nft_printf| ", ret_printf);
	fflush(stdout);
	ret_ft_printf = ft_printf("[ %p %p %p %p ]\n",
			(void *)1, (void *)15, (void *)16, (void *)17);
	printf("ret: %d\n\n", ret_ft_printf);

	printf("---- p long ----\nprintf   | ");
	ret_printf = printf("[ %p %p ]\n",
			(void *)LONG_MIN, (void *)LONG_MAX);
	printf("ret: %d\nft_printf| ", ret_printf);
	fflush(stdout);
	ret_ft_printf = ft_printf("[ %p %p ]\n",
			(void *)LONG_MIN, (void *)LONG_MAX);
	printf("ret: %d\n\n", ret_ft_printf);

	printf("---- p int ----\nprintf   | ");
	ret_printf = printf("[ %p %p ]\n",
			(void *)INT_MIN, (void *)INT_MAX);
	printf("ret: %d\nft_printf| ", ret_printf);
	fflush(stdout);
	ret_ft_printf = ft_printf("[ %p %p ]\n",
			(void *)INT_MIN, (void *)INT_MAX);
	printf("ret: %d\n\n", ret_ft_printf);

	printf("---- p unsigned long ----\nprintf   | ");
	ret_printf = printf("[ %p %p ]\n",
			(void *)ULONG_MAX, (void *)-ULONG_MAX);
	printf("ret: %d\nft_printf| ", ret_printf);
	fflush(stdout);
	ret_ft_printf = ft_printf("[ %p %p ]\n",
			(void *)ULONG_MAX, (void *)-ULONG_MAX);
	printf("ret: %d\n\n", ret_ft_printf);

	printf("---- d ----\nprintf   | ");
	ret_printf = printf("[ %d %d %d ]\n", 0, 42, -42);
	printf("ret: %d\nft_printf| ", ret_printf);
	fflush(stdout);
	ret_ft_printf = ft_printf("[ %d %d %d ]\n", 0, 42, -42);
	printf("ret: %d\n\n", ret_ft_printf);

	printf("---- i ----\nprintf   | ");
	ret_printf = printf("[ %i %i %i ]\n", INT_MIN, 0, INT_MAX);
	printf("ret: %d\nft_printf| ", ret_printf);
	fflush(stdout);
	ret_ft_printf = ft_printf("[ %i %i %i ]\n", INT_MIN, 0, INT_MAX);
	printf("ret: %d\n\n", ret_ft_printf);

	printf("---- u ----\nprintf   | ");
	ret_printf = printf("[ %u %u %u ]\n", 0U, 42U, UINT_MAX);
	printf("ret: %d\nft_printf| ", ret_printf);
	fflush(stdout);
	ret_ft_printf = ft_printf("[ %u %u %u ]\n", 0U, 42U, UINT_MAX);
	printf("ret: %d\n\n", ret_ft_printf);

	printf("---- x ----\nprintf   | ");
	ret_printf = printf("[ %x %x %x ]\n", 0U, 42U, UINT_MAX);
	printf("ret: %d\nft_printf| ", ret_printf);
	fflush(stdout);
	ret_ft_printf = ft_printf("[ %x %x %x ]\n", 0U, 42U, UINT_MAX);
	printf("ret: %d\n\n", ret_ft_printf);

	printf("---- X ----\nprintf   | ");
	ret_printf = printf("[ %X %X %X ]\n", 0U, 42U, UINT_MAX);
	printf("ret: %d\nft_printf| ", ret_printf);
	fflush(stdout);
	ret_ft_printf = ft_printf("[ %X %X %X ]\n", 0U, 42U, UINT_MAX);
	printf("ret: %d\n\n", ret_ft_printf);

	printf("---- percent ----\nprintf   | ");
	ret_printf = printf("[ %% ]\n");
	printf("ret: %d\nft_printf| ", ret_printf);
	fflush(stdout);
	ret_ft_printf = ft_printf("[ %% ]\n");
	printf("ret: %d\n\n", ret_ft_printf);

	printf("---- mix ----\nprintf   | ");
	ret_printf = printf("[ This is test %c %s %p %d %i %u %x %X %% This is test ]\n",
			'Z', "abc", (void *)"abc", -1, INT_MAX, UINT_MAX, 48879U,
			48879U);
	printf("ret: %d\nft_printf| ", ret_printf);
	fflush(stdout);
	ret_ft_printf = ft_printf("[ This is test %c %s %p %d %i %u %x %X %% This is test ]\n",
			'Z', "abc", (void *)"abc", -1, INT_MAX, UINT_MAX, 48879U,
			48879U);
	printf("ret: %d\n", ret_ft_printf);
	return (0);
}
