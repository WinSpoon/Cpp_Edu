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
	// ** �Է��� ���Ƿ� ������ ����.
	char Buffer[128] = "";

	printf_s("�̸� �Է� : ");
	
	// ** �Է��� ����.
	scanf("%s", Buffer);

	// ** ������ ������ (���ڿ��� ���̸�ŭ) �����Ҵ��� ���ش�. 
	char* pName = (char*)malloc(strlen(Buffer) + 1);

	// ** ���ڿ� ����.
	strcpy(pName, Buffer);

	// ** ���
	printf_s("%s\n", pName);
	*/




	//char* Name = SetName();
	//printf_s("�̸� : %s", Name);






	/*
	printf_s("%d\n", sizeof(INFO*));
	printf_s("%d\n", sizeof(INFO));
	*/





	/*
	printf_s("����ü�� ũ�� : %d Byte\n", sizeof(INFO));

	INFO* pInfoList[100];

	for (int i = 0; i < 100; ++i)
	{
		INFO* pInfo = (INFO*)malloc(sizeof(INFO));

		pInfo->iKor = 10;
		pInfo->iEng = 20;
		pInfo->iMath = 30;

		printf_s("�������� : %d\n", pInfo->iKor);
		printf_s("�������� : %d\n", pInfo->iEng);
		printf_s("�������� : %d\n", pInfo->iMath);
		printf_s("%dByte\n", sizeof(pInfo));

		pInfoList[i] = pInfo;
	}
	*/

	// ** (INFO*) ����ȯ    
	// ** malloc( ũ�� ); �����Ҵ� �Լ�
	// ** sizeof(type) = type�� ũ���ȯ


	INFO* pInfo = (INFO*)malloc(sizeof(INFO));

	pInfo->iKor = 10;
	pInfo->iEng = 20;
	pInfo->iMath = 30;

	printf_s("�������� : %d\n", pInfo->iKor);
	printf_s("�������� : %d\n", pInfo->iEng);
	printf_s("�������� : %d\n", pInfo->iMath);
	printf_s("%dByte\n", sizeof(pInfo));

	free(pInfo);

	printf_s("�������� : %d\n", pInfo->iKor);
	printf_s("�������� : %d\n", pInfo->iEng);
	printf_s("�������� : %d\n", pInfo->iMath);


	return 0;
}


char* SetName()
{
	// ** �Է��� ���Ƿ� ������ ����.
	char Buffer[128] = "";

	printf_s("�̸� �Է� : ");

	// ** �Է��� ����.
	scanf("%s", Buffer);

	// ** ������ ������ (���ڿ��� ���̸�ŭ) �����Ҵ��� ���ش�. 
	char* pName = (char*)malloc(strlen(Buffer) + 1);

	// ** ���ڿ� ����.
	strcpy(pName, Buffer);


	return pName;
}