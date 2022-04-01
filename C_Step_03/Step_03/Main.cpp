#include <stdio.h>

int main(void)
{
	/*
	// ** 변수 선언
	int a;
	int b;

	// ** 선언과 동시에 초기화
	int c = 30, d = 40;

	// ** 초기화
	a = 10;
	b = 20;

	printf_s("%d %d \n", a, b);
	printf_s("%d %d \n", c, d);
	*/








	/*
	// ** 변수 선언
	float fNumber;

	// ** 변수 초기화
	fNumber = 87.654321;

	// ** 출력
	printf_s("%f\n", fNumber);	// 형태에 알맞은 출력
	printf_s("%d\n", (int)fNumber);	// float형을 int형으로 변환
	printf_s("%c\n", (char)fNumber);	// float형을 char형으로 변환
	printf_s("%d\n", fNumber);	// 형태에 알맞지 않은 출력. 쓰레기 값 출력.
	*/






	/*
	// ** 실수형 타입의 변수를
	float fPI = 3.141592f;


	// ** 정수형 타입의 변수에 대입하면
	// ** 소수점 데이터는 소실 된다.
	int i = fPI;

	printf_s("%02d\n", i);  // 3
	printf_s("%0.3f\n", fPI);
	*/



	/*
	// ** 서식문자 사용 예
	printf_s("%d\n", 3.14);		// 1374389535
	printf_s("%d\n", 314);		// 314
	printf_s("%d\n", 0x13a);	// 314

	printf_s("%x\n", 0x13a);	// 13a
	printf_s("%X\n", 0X13A);	// 13A
	*/




	/*
	// ** 문자는 정수형 
	printf_s("%d\n", 'A');	// 65
	printf_s("%c\n", 65);	// A
	printf_s("%x\n", 'A');	// 41
	printf_s("%c\n", 'A');	// A
	*/




	/*
	// ** 입출력 사용 예
	int iNum;			// 값을 저장 받을 int 형 
	float fNum;		// 값을 저장 받을 float 형

	printf_s("iNum 값 입력 : ");
	scanf_s("%d", &iNum);	// scanf_s(); 에 값을 입력하고 ‘&’ 로 저장 될 				// 위치를 정해준다
	printf_s("fNum 값 입력 : ");
	scanf_s("%f", &fNum);

	printf_s("iNum : %d\n", iNum);
	printf_s("fNum : %f\n", fNum);
	*/



	// ** 입출력 함수의 서식문자 와 전달값에 대한 관계(적용 순서)
	//printf_s("fNum : %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);





	/*
	int i = 0;
	scanf_s("입력 : %d", &i);  // X
	// ** 입력 함수에 아무리 출력 문구를 써도 출력되지 않음.


	
	printf_s("입력 : ");
	scanf_s("%d", &i); // O
	*/


	// ** printf_s("%d\n", (10 != 10));



	return 0;
}
