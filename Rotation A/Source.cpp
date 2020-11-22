#include<stdio.h>


struct  number
{
	int N = 0;
	int M = 0;
	int a[150][150] = {};
};

void rotation(int x, int y)
{
	struct number num;

	scanf_s("%d%d", &num.N, &num.M);

	


	for (int i = 0;i < num.N;i++)
	{
		for (int j = 0;j < num.M;j++)
		{
			scanf_s("%d", &num.a[i][j]);
		}
	}
	printf("\n");

	for (int i = num.M - 1;i >= 0;i--)
	{
		for (int j = 0;j <= num.M;j++)
		{
			printf("%d ", num.a[j][i]);
		}
		printf("\n");
	}
}


int main()
{
	
	int X = 0;
	int Y = 0;

	rotation(X, Y);



	return 0;
}