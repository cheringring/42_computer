/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckwon <ckwon@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 10:11:23 by ckwon             #+#    #+#             */
/*   Updated: 2024/08/17 14:33:19 by ckwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	while (*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>

int main()
{
    char dest[50] = "Hello, ";
    char src[] = "world!";

    printf("원본 dest 문자열: '%s'\n", dest);
    printf("원본 src 문자열: '%s'\n", src);

    ft_strcat(dest, src);

    printf("문자열 연결 후 dest: '%s'\n", dest);

    return 0;
}
