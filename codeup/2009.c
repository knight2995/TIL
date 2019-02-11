#include <stdio.h>

int main()
{
	int coupon;
	int require;

	scanf("%d %d", &coupon, &require);

	int sum = 0;
	while (coupon >= require)
	{
		sum++;
		coupon -= require;
		coupon++;
	}

	printf("%d", sum);
	return 0;
}
