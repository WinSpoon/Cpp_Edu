#include <stdio.h>




int main(void)
{
	/*
	int i = 0;

	printf_s("1. ��  ��\n");
	printf_s("2. ��  ��\n");
	printf_s("3. ������\n");
	printf_s("�Է� : ");
	scanf_s("%d", &i);

	if (i == 1)
	{
		printf_s("��  �縦 ���� �Ͽ����ϴ�.\n");
	}
	else if (i == 2)
	{
		printf_s("��  ���� ���� �Ͽ����ϴ�.\n");
	}
	else if (i == 3)
	{
		printf_s("�����縦 ���� �Ͽ����ϴ�.\n");
	}
	*/


	// ** BMI ���� ���.
	int iHeight;
	int iWeight;
	float fHeight;
	float fBmi;

	printf_s("Ű(cm) : ");
	scanf_s("%d", &iHeight);

	printf_s("������(kg) : ");
	scanf_s("%d", &iWeight);

	fHeight = iHeight / 100.0f;
	fBmi = iWeight / (fHeight * fHeight);

	printf_s("������ : %.1f", fBmi);

	if (fBmi >= 30) 
		printf_s("����\n");

	if (fBmi >= 25)
		printf_s("��\n");

	if (fBmi >= 23)
		printf_s("��ü��\n");

	if (fBmi >= 18.5)
		printf_s("ǥ��\n");
	else
		printf_s("ü�� �̴�\n");

	return 0;
}