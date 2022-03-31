#include <stdio.h>



int main(void)
{
	printf_s("Hello, World!!\n");

	// ** [서식문자]

	// ** [%c] = 문자 출력 
	// ** [%s] = 문자열 출력
	// ** [%d] = 정수 출력
	// ** [%f] = 실수 출력

	printf_s("char : %d\n", sizeof(char));
	printf_s("short : %d\n", sizeof(short));
	printf_s("int : %d\n", sizeof(int));
	printf_s("float : %d\n", sizeof(float));
	printf_s("long : %d\n", sizeof(long));
	printf_s("double : %d\n", sizeof(double));

	// ** sizeof( datatype ) = 자료형의 크기를 바이트 단위로 반환시켜줌.


	// ** [\n] 줄바꿈
	// ** [\t] 공백




	printf_s("********************************************\n");
	printf_s("  Let’s Study C / C++ Game Programming!!!\n");
	printf_s("********************************************\n");

	//========[위 출력 결과와 아래 출력 결과는 같다.]=============

	printf_s("********************************************\n  Let’s Study C / C++ Game Programming!!!\n********************************************\n");




	return 0;
}

