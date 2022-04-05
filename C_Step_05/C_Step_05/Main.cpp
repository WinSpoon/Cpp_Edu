#include <stdio.h>



// ** 전역변수 선언부
int Count;


// ** 매개 변수는 해당 영역을 벗어날수 없다.
float GetAngle(float _deg)
{
	{
		// ** 현재 영역을 벗어나면 사라짐.
		int deg = 10;
	}

	// ** 전역변수 사용
	Count = 10;

	return _deg + 10;
}


// ** return & returning type
float Sum(float _i, float _j)
{
	return _i + _j;
}


int main(void)
{
	// ** 변수의 이름이 같다면 해당 영역에 있는 변수가 우선순위가 됨.
	int val = 10;

	if (val == 10)
	{
		// ** 해당 영역내부에서 상위 영역에 있는 변수의 이름과 동일하게 선언 가능.
		int val = 20;

		// ** 이러한 경우에는 해당 영역에 있는 변수가 우선순위가 된다.
		printf_s("%d\n", val);
	}


	// ** 해당 함수 내부에서 전역변수인 Count 를 10으로 초기화 함.
	GetAngle(3.141592f);

	// ** 전역변수 출력
	printf_s("Count : %d\n", Count);



	// ** 전역 변수 사용
	Count = 20;

	// ** 전역변수 출력
	printf_s("Count : %d\n", Count);

	//int Result = Sum(10, 20);
	
	printf_s("Result : %f\n", Sum(3.1415f, 3.1415f));


	return 0;
}