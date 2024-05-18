#include<stdio.h>
#include<stdbool.h>
int count(int num);
int main(void) {
	int num, sum;
	scanf("%d", &num);
	sum = count(num);
	printf("小於%d的最大值數:%d", num, sum);
}
int count(int num) {
	int i, j;
	for (i = num-1; i >= 2; i--)
	{
		bool logic = true;
		for (j = 2; j*j <= i; j++)
		{
			if (i % j == 0)
			{
				logic = false;
				break;
			}
		}
		if (logic)
		{
			return i;
		}
	}
	return -1;
}