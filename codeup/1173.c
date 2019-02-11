#include <stdio.h>

int main()
{
	int hour, min;

	scanf("%d %d", &hour, &min);

	min -= 30;
	if (min < 0)
	{
		min += 60;
		hour -= 1;
	}
	if (hour < 0)
		hour = 23;

	printf("%d %d", hour, min);
	return 0;

}
