#include <unistd.h>

#include <unistd.h>

int	ft_is_nonprintable(char c)
{
	return (c < 32 || c >= 127);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;
	unsigned int	p;
	unsigned int	q;
	char			*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (ft_is_nonprintable(str[i]))
		{
			write(1, '\\x', 2);
			p = (unsigned char)str[i] / 16;
			q = (unsigned char)str[i] % 16;
			write(1, &hex[p], 1);
			write(1, &hex[q], 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

int main(void)
{
    // 비가시 문자가 포함된 문자열
    char test_str[] = "Hello\x01\x02World\x7F\x10";

    // 비가시 문자를 '\0'으로 대체하여 출력
    ft_putstr_non_printable(test_str);

    return 0;
}
