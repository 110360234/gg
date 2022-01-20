#include<stdio.h>
#include<stdlib.h>

int main()
{
	int y;

	for (y = 1; y <= 10; y++)
	{
		if (y == 5)
		{
			continue;//break loop only if x is 5
		}
		printf("%d  ", y);
	}

	printf("\nUsed continue to skip printing the value 5\n");
	system("pause");
	return 0;
}