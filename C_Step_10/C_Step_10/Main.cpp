#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string>


int main(void)
{
	// ** 입력을 임의로 저장할 공간.
	char Buffer[128] = "";

	printf_s("이름 입력 : ");
	
	// ** 입력을 받음.
	scanf("%s", Buffer);

	// ** 포인터 변수에 (문자열의 길이만큼) 동적할당을 해준다. 
	char* pName = (char*)malloc(strlen(Buffer) + 1);

	// ** 문자열 복사.
	strcpy(pName, Buffer);

	// ** 출력
	printf_s("%s\n", pName);





	return 0;
}