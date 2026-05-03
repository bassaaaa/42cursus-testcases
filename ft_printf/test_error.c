/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsito <tsito@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 16:16:02 by tsito             #+#    #+#             */
/*   Updated: 2026/05/03 16:17:18 by tsito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

static void	check(const char *name, int ret)
{
	if (ret < 0)
		dprintf(2, "OK  %-8s ret=%d\n", name, ret);
	else
		dprintf(2, "KO  %-8s ret=%d\n", name, ret);
}

int	main(void)
{
	close(1);
	check("plain", ft_printf("abc"));
	check("c", ft_printf("%c", 'a'));
	check("s", ft_printf("%s", "abc"));
	check("null-s", ft_printf("%s", NULL));
	check("p", ft_printf("%p", (void *)0x1234));
	check("null-p", ft_printf("%p", NULL));
	check("d", ft_printf("%d", -42));
	check("i", ft_printf("%i", 42));
	check("u", ft_printf("%u", 42u));
	check("x", ft_printf("%x", 42u));
	check("X", ft_printf("%X", 42u));
	check("percent", ft_printf("%%"));
	return (0);
}
