#include <stdio.h>

int main()
{
	int min_weight = 99999;
	int i, min_train, weight[6];

	for (i = 0; i < 6; i++)
	{
		printf("%d번 칸의 하중(kg): ", i + 1); 
		scanf("%d", &weight[i]); // 각 칸의 하중 데이터 받기
	}

	printf("\n");

	for (i = 0; i < 6; i++)
	{
		if (weight[i] < 8255)
			printf("%d번 칸은 여유 단계입니다.\n", i + 1);
		else if (weight[i] >= 13520)
			printf("%d번 칸은 혼잡 단계입니다.\n", i + 1);
		else
			printf("%d번 칸은 보통 단계입니다.\n", i + 1); // 혼잡도 3단계 분류하기
	}

	printf("\n");

	for (i = 0; i < 6; i++)
	{
		if (weight[i] < min_weight)
		{
			min_weight = weight[i]; // 하중의 최솟값 찾기
			min_train = i + 1;
		}
	}

	printf("가장 혼잡도가 낮은 칸은 %d번 칸입니다.\n", min_train);
}
