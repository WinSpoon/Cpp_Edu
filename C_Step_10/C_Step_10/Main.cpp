#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string>


typedef struct tagInfo
{
	int iKor;
	int iEng;
	int iMath;

}INFO;





char* SetName();



int main(void)
{
	/*
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
	*/




	//char* Name = SetName();
	//printf_s("이름 : %s", Name);






	/*
	printf_s("%d\n", sizeof(INFO*));
	printf_s("%d\n", sizeof(INFO));
	*/





	/*
	printf_s("구조체의 크기 : %d Byte\n", sizeof(INFO));

	INFO* pInfoList[100];

	for (int i = 0; i < 100; ++i)
	{
		INFO* pInfo = (INFO*)malloc(sizeof(INFO));

		pInfo->iKor = 10;
		pInfo->iEng = 20;
		pInfo->iMath = 30;

		printf_s("국어점수 : %d\n", pInfo->iKor);
		printf_s("영어점수 : %d\n", pInfo->iEng);
		printf_s("수학점수 : %d\n", pInfo->iMath);
		printf_s("%dByte\n", sizeof(pInfo));

		pInfoList[i] = pInfo;
	}
	*/

	// ** (INFO*) 형변환    
	// ** malloc( 크기 ); 동적할당 함수
	// ** sizeof(type) = type의 크기반환


	INFO* pInfo = (INFO*)malloc(sizeof(INFO));

	pInfo->iKor = 10;
	pInfo->iEng = 20;
	pInfo->iMath = 30;

	printf_s("국어점수 : %d\n", pInfo->iKor);
	printf_s("영어점수 : %d\n", pInfo->iEng);
	printf_s("수학점수 : %d\n", pInfo->iMath);
	printf_s("%dByte\n", sizeof(pInfo));

	free(pInfo);

	printf_s("국어점수 : %d\n", pInfo->iKor);
	printf_s("영어점수 : %d\n", pInfo->iEng);
	printf_s("수학점수 : %d\n", pInfo->iMath);


	return 0;
}


char* SetName()
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


	return pName;
}