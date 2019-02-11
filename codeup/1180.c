#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	if (n >= 10)
		n = (10 * (n % 10)) + (n / 10);

	n *= 2;
	n %= 100;

	printf("%d\n", n);
	if (n <= 50)
		printf("GOOD");
	else
		printf("OH MY GOD");

	return 0;
}
