#include <stdio.h>

int main()
{
	int n;
	int digit = 0;

	scanf("%d", &n);

	do
	{
		digit++;
		n /= 10;
	} while (n != 0);

	printf("%d", digit);

	return 0;
}
