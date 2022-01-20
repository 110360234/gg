#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x;

	for (x = 1; x <= 10; x++)
	{
		if (x == 5)
		{
			break;//break loop only if x is 5
		}
		printf("%d  ", x);
	}

	printf("\nBroke out of loop at x == %d\n", x);
	system("pause");
	return 0;
}