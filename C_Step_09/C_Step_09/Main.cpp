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
	// ** ����.
	//typedef int INT;

	// ** 10���� �л��� �ְ�, ������ �л��� ����, ����, ���� ������ �ִ�.
	// ** ������ ������ �ʱ�ȭ �ؼ� ����غ���.

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
	// ** ����
	INFO Info;
	// ** ���ڿ� ����
	strcpy(Info.Name, "ȫ�浿");
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
	printf_s("����� ������ ���� �Դϱ�??\n");
	printf_s("***************************\n");
	printf_s("*    1. ��          ��    *\n");
	printf_s("*    2. ��    ��    ��    *\n");
	printf_s("*    3. ��          ��    *\n");
	printf_s("***************************\n");
	scanf_s("%d", &iIndex);
	switch (iIndex)
	{
	case 1:
		strcpy(info.Name, "����");
		break;
	case 2:
		strcpy(info.Name, "������");
		break;
	case 3:
		strcpy(info.Name, "����");
		break;
	}
	printf_s("%s\n", info.Name);
	*/



	// ** 3���� �л� ����(�̸�, ����, ����, ����)�� ���� �Է��ϰ�,
	// ** ��� �Է��� ������ �ڵ����� �Է��� ������ ����ϴ� ���α׷��� ������.


	INFO Student[3];

	printf_s("�̸� �Է� :");

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