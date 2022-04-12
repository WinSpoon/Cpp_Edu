#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string>

typedef struct tagInfo
{
	char Name[7];
	int Number;

	int iKor;
	int iEng;
	int iMath;
}INFO;


int main(void)
{
	// ** 별명.
	//typedef int INT;

	// ** 10명의 학생이 있고, 각각의 학생은 국어, 영어, 수학 점수가 있다.
	// ** 임이의 값으로 초기화 해서 출력해보자.

	/*
	int iKor[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int iEnd[10] = { 70, 50, 100, 25, 30, 40, 60, 80, 20, 90};
	int iMath[10] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
	for (int i = 0; i < 10; ++i)
	{
		printf_s("%d %d %d\n", iKor[i], iEnd[i], iMath[i]);
	}
	*/




	/*
	// ** 선언
	INFO Info;
	// ** 문자열 복사
	strcpy(Info.Name, "홍길동");
	Info.iKor = 10;
	Info.iEng = 20;
	Info.iMath = 30;
	printf_s("%s\n", Info.Name);
	printf_s("%d\n", Info.iKor);
	printf_s("%d\n", Info.iEng);
	printf_s("%d\n", Info.iMath);
	*/




	/*
	INFO info;
	int iIndex = 0;
	printf_s("당신의 직업은 무엇 입니까??\n");
	printf_s("***************************\n");
	printf_s("*    1. 도          적    *\n");
	printf_s("*    2. 마    법    사    *\n");
	printf_s("*    3. 전          사    *\n");
	printf_s("***************************\n");
	scanf_s("%d", &iIndex);
	switch (iIndex)
	{
	case 1:
		strcpy(info.Name, "도적");
		break;
	case 2:
		strcpy(info.Name, "마법사");
		break;
	case 3:
		strcpy(info.Name, "전사");
		break;
	}
	printf_s("%s\n", info.Name);
	*/



	// ** 3명의 학생 정보(이름, 국어, 영어, 수학)를 직접 입력하고,
	// ** 모든 입력이 끝나면 자동으로 입력한 내용을 출력하는 프로그램을 만들어보자.


	INFO Student[3];

	printf_s("이름 입력 :");

	char name[128] = "";

	scanf_s("%s", name, strlen(name));

	printf_s("%s\n", name);




	// name[0]  0x0001  00000000
	// name[1]  0x0002  00000000
	// name[2]  0x0003  00000000
	// name[3]  0x0004  00000000
	// name[4]  0x0005  00000000
	// name[5]  0x0006  00000000
	// name[6]  0x0007  00000000
	// name[7]  0x0008  00000000

	return 0;
}