#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string>


int main(void)
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

	// ** ���
	printf_s("%s\n", pName);





	return 0;
}