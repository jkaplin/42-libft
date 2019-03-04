#include "libft.h"
#include <stdio.h>
#include <limits.h>
int main()
{
	int diff1;
	int diff2;
	diff1 = ft_memcmp("ab\0ab", "ab\0ac", 6);
	diff2 = memcmp("ab\0ab", "ab\0ac", 6);
	printf("%d\n%d\n", diff1, diff2);
	diff1 = ft_memcmp("a", "", 6);
	diff2 = memcmp("a", "", 6);
	printf("%d\n%d\n", diff1, diff2);
	return (0);
}
