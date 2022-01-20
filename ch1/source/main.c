#include<stdio.h>

int main()
{
	int number1, number2;

	printf("請輸入兩個數字，中間使用空白間格):");
	scanf_s("%d %d", &number1, &number2);
	printf("你輸入的數字:%d %d\n", number1, number2);

	printf("請輸入兩個數字，中間使用-間格):");
	scanf_s("%d-%d", &number1, &number2);
	printf("你輸入的數字:%d-%d\n",number1, number2 );

}