/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckwon <ckwon@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 11:30:37 by ckwon             #+#    #+#             */
/*   Updated: 2024/08/17 16:10:36 by ckwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	r;

	i = 0;
	j = 0;
	r = 0;
	while (dest[i])
		i++;
	while (src[r])
		r++;
	if (size <= i)
		r = r + size;
	else
		r = r + i;
	while (src[j] && i + 1 < size)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (r);
}

#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
    char dest[50] = "Hello";
    char src[] = " World!";
    unsigned int size = 7;

    printf("'%s','%s'\n",dest,src);
    printf(" 사이즈:'%u'\n",size);
    unsigned int result = ft_strlcat(dest, src, size);

    printf("문자열 연결: '%s'\n", dest);
    printf("최종 문자열 길이: %u\n", result);

    return 0;
}
