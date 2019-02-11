#include <stdio.h>

int main()
{
	int n, m, k, l;
	scanf("%d %d %d %d", n, m, k, l);
	
	int value = n;

	l -= 1;

	while (l--)
		value = value * m + k;

	printf("%d", value);

	return 0;
}
