#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	/*
	// ** 선언 및 초기화 
	int i = 0;

	// ** 특정 조건이 만족하는동안
	while (i < 10)
	{
		// ** 현재 영역의 내용이 반복됨.
		printf_s("Hello World!! %d\n", i);

		// ** 증가연산
		i++;
	}
	*/








	/*
	// ** 타이핑 연습 예제
	int iFahrenheit, iCelsius = 0;
	int iLower, iUpper, iStep;

	iLower = 0;
	iUpper = 300;
	iStep = 20;

	iFahrenheit = iLower;

	while (iFahrenheit <= iUpper)
	{
		iCelsius = 5 * (iFahrenheit - 32) / 9;
		printf_s("화씨 : %d\t섭씨 : %d\n", iFahrenheit, iCelsius);
		iFahrenheit += iStep;
	}

	printf_s("\n");
	*/







	// ** 변수 선언 및 초기화.
	int iNumber = 0;
	/*
	// ** 반복 조건이 true 이면 계속하여 실행
	while (true)		
	{
		// ** 콘솔창에 있는 내용을 삭제함.
		//system("cls");

		// ** 증가 연산
		iNumber++;

		if (iNumber > 4 && iNumber < 7)
		{
			printf_s("Messge : %d continue !!\n", iNumber);
			continue;
		}

		// ** 출력
		printf_s("Loop Count!: %d\n", iNumber);

		// ** 분기문을 활용하여 특정 조건에 
		if (iNumber > 10)
			// ** 탈출 가능
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
	// ** 구구단
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