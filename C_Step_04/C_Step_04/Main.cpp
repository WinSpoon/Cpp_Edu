#include <stdio.h>




int main(void)
{
	/*
	int i = 0;

	printf_s("1. 기  사\n");
	printf_s("2. 궁  수\n");
	printf_s("3. 마법사\n");
	printf_s("입력 : ");
	scanf_s("%d", &i);

	if (i == 1)
	{
		printf_s("기  사를 선택 하였습니다.\n");
	}
	else if (i == 2)
	{
		printf_s("궁  수를 선택 하였습니다.\n");
	}
	else if (i == 3)
	{
		printf_s("마법사를 선택 하였습니다.\n");
	}
	*/


	// ** BMI 문제 답안.
	int iHeight;
	int iWeight;
	float fHeight;
	float fBmi;

	printf_s("키(cm) : ");
	scanf_s("%d", &iHeight);

	printf_s("몸무게(kg) : ");
	scanf_s("%d", &iWeight);

	fHeight = iHeight / 100.0f;
	fBmi = iWeight / (fHeight * fHeight);

	printf_s("비만지수 : %.1f", fBmi);

	if (fBmi >= 30) 
		printf_s("고도비만\n");

	if (fBmi >= 25)
		printf_s("비만\n");

	if (fBmi >= 23)
		printf_s("과체중\n");

	if (fBmi >= 18.5)
		printf_s("표준\n");
	else
		printf_s("체중 미달\n");

	return 0;
}