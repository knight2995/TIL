#include <stdio.h>

int main()
{
	int max = -1000000;
	int min = 1000000;
	for (int i = 0; i < 5; i++)
	{
		int k;
		scanf("%d", &k);

		if (k > max)
			max = k;
		if (k < min)
			min = k;

	}
	printf("%d\n%d", max, min);

	return 0;
}
