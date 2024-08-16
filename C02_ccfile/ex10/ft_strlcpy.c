#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++)
	{
		count++;
	}
	return (count);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen((char *)src);
	if (!dest || !src)
		return (0);
	if (size == 0)
		return (len);
	while (src[i] != '\0' && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (len);
}
#include <stdio.h>

int main(void)
{
    char src[] = "Hello, world!";
    char dest[20];
    unsigned int len;

    // 문자열 길이 계산
    len = ft_strlen(src);
    printf("Length of src: %d\n", len);

    // 문자열 복사
    len = ft_strlcpy(dest, src, sizeof(dest));
    printf("Copied string: %s\n", dest);
    printf("Length of src: %u\n", len);

    return 0;
}
