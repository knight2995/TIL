#include <stdio.h>

int main()
{
	int n, m, k;

	scanf("%d %d %d", n, m, k);

	int value = n;

	k -= 1;

	while (k--)
		value *= m;

	printf("%d", value);

	return 0;
}
