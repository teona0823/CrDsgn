#include <stdio.h>

int main()
{
	int min_weight = 99999;
	int i, min_train, weight[6];

	for (i = 0; i < 6; i++)
	{
		printf("%d�� ĭ�� ����(kg): ", i + 1); 
		scanf("%d", &weight[i]); // �� ĭ�� ���� ������ �ޱ�
	}

	printf("\n");

	for (i = 0; i < 6; i++)
	{
		if (weight[i] < 8255)
			printf("%d�� ĭ�� ���� �ܰ��Դϴ�.\n", i + 1);
		else if (weight[i] >= 13520)
			printf("%d�� ĭ�� ȥ�� �ܰ��Դϴ�.\n", i + 1);
		else
			printf("%d�� ĭ�� ���� �ܰ��Դϴ�.\n", i + 1); // ȥ�⵵ 3�ܰ� �з��ϱ�
	}

	printf("\n");

	for (i = 0; i < 6; i++)
	{
		if (weight[i] < min_weight)
		{
			min_weight = weight[i]; // ������ �ּڰ� ã��
			min_train = i + 1;
		}
	}

	printf("���� ȥ�⵵�� ���� ĭ�� %d�� ĭ�Դϴ�.\n", min_train);
}
