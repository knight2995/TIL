#include <stdio.h>

int main()
{
	int n;
	while (1)
	{
		scanf("%d", &n);
		printf("%d\n", n);

		if (n == 0)
			break;
	}
	return 0;
}