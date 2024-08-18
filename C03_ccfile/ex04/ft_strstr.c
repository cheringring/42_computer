/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckwon <ckwon@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 10:51:49 by ckwon             #+#    #+#             */
/*   Updated: 2024/08/17 14:36:51 by ckwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
#include <stdio.h>

int main()
{
    char str[] = "Hello, world!";
    char to_find1[] = "world";
    char to_find2[] = "notfound";

    char *result1 = ft_strstr(str, to_find1);
    char *result2 = ft_strstr(str, to_find2);

    if (result1)
        printf("'%s' 문자열에서 '%s' 발견: '%s'\n", str, to_find1, result1);
    else
        printf("'%s' 문자열에서 '%s' 발견하지 못함\n", str, to_find1);

    if (result2)
        printf("'%s' 문자열에서 '%s' 발견: '%s'\n", str, to_find2, result2);
    else
        printf("'%s' 문자열에서 '%s' 발견하지 못함\n", str, to_find2);

    return 0;
}
