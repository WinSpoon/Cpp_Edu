#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	/*
	// ** ���� �� �ʱ�ȭ 
	int i = 0;

	// ** Ư�� ������ �����ϴµ���
	while (i < 10)
	{
		// ** ���� ������ ������ �ݺ���.
		printf_s("Hello World!! %d\n", i);

		// ** ��������
		i++;
	}
	*/








	/*
	// ** Ÿ���� ���� ����
	int iFahrenheit, iCelsius = 0;
	int iLower, iUpper, iStep;

	iLower = 0;
	iUpper = 300;
	iStep = 20;

	iFahrenheit = iLower;

	while (iFahrenheit <= iUpper)
	{
		iCelsius = 5 * (iFahrenheit - 32) / 9;
		printf_s("ȭ�� : %d\t���� : %d\n", iFahrenheit, iCelsius);
		iFahrenheit += iStep;
	}

	printf_s("\n");
	*/







	// ** ���� ���� �� �ʱ�ȭ.
	int iNumber = 0;
	/*
	// ** �ݺ� ������ true �̸� ����Ͽ� ����
	while (true)		
	{
		// ** �ܼ�â�� �ִ� ������ ������.
		//system("cls");

		// ** ���� ����
		iNumber++;

		if (iNumber > 4 && iNumber < 7)
		{
			printf_s("Messge : %d continue !!\n", iNumber);
			continue;
		}

		// ** ���
		printf_s("Loop Count!: %d\n", iNumber);

		// ** �б⹮�� Ȱ���Ͽ� Ư�� ���ǿ� 
		if (iNumber > 10)
			// ** Ż�� ����
			break;
	}
	*/


	/*
	for (int i = 0; i < 10; i++)
	{
		printf_s("Loop Count!: %d\n", i);
	}
	*/




	/*
	// ** ������
	for (int i = 2; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf_s("%d x %d = %d \n", i, j, i * j);
		}
		printf_s("\n");
	}
	printf_s("\n");
	*/



	/*
	double fPrice1 = 24.0f;
	int iYear;

	for (iYear = 1627; iYear < 2017; iYear++)
	{
		fPrice1 *= 1.08f;
		fPrice2 *= 1.08f;
	}

	printf_s("1627 : $ 24 -> 2016 : $ %0.2f\n", fPrice1);
	*/



	return 0;
}