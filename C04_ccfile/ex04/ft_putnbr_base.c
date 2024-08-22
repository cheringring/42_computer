#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	base_check(char *base)
{
	int	i;
	int	z;

	i = 0;
	while (base[0] == '\0' || base[1] == '\0')
	{
		return (0);
	}
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

void	ft_num(int nbr, char *base, int len)
{
	if (nbr >= len)
	{
		ft_num(nbr / len, base, len);
	}
	ft_putchar(base[nbr % len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	if (!base_check(base))
		return ;
	base_len = 0;
	while (base[base_len])
	{
		base_len++;
	}	
	if (base_len < 2)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr == 0)
		ft_putchar(base[0]);
	else
		ft_num(nbr, base, base_len);
}

#include <stdio.h>

int main(void) {
    char base_hex[] = "0123456789ABCDEF";
    char base_two[] = "01";

    printf("255를 16진수로 변환:\n");
    ft_putnbr_base(255, base_hex);
    ft_putchar('\n');

    printf("10을 2진수로 변환:\n");
    ft_putnbr_base(10, base_two);
    ft_putchar('\n');
}

