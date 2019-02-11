#include <stdio.h>

int main()
{
	int n;
	int sum;
	scanf("%d", &n);

	sum = n * (n + 1) / 2;

	int k;
	for (int i = 0; i < n - 1; i++)
	{
		scanf("%d", &k);
		sum -= k;
	}
	printf("%d", sum);

	return 0;

}
