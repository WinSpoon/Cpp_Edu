#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string>
#include <time.h>




char* SetName()
{
	char Buffer[1024] = "";

	printf("����� �̸��� �Է��ϼ���.\n");
	printf("�Է� : ");

	scanf("%s", Buffer);

	//     ������� �޾ƿ� ������ ���� (�������� ����� ���ڿ��� �ּҸ� �޾ƿ�)
	//     ��        
	//     ��        �� ������ ����� ���ڿ��� ����
	//     ��        ��     
	//     ��        ��     malloc(ũ��) = �����Ҵ�
	//     ��        ��     ��        
	//     ��        ��     ��        strlen(���ڿ�) = ���ڿ��� ���̸� ��ȯ
	//     ��        ��     ��        ��
	char* pName = (char*)malloc(strlen(Buffer) + 1);
	//��            ��
	//������������������������������    ���� �����̾�� �Ѵ�.


	// ** strcpy(������ ��ġ, ������);
	// ** strcpy(pName, Buffer);  Buffer �� pName���� ������.
	strcpy(pName, Buffer);

	return pName;
}



int main(void)
{
	/*
	printf("������ ���۵˴ϴ�.\n");

	char Buffer[128] = "";
	char* pName = SetName();

	printf("����� �̸��� [%s] �̱��� !!\n", pName);
	*/



	/*
	char cAlphabet;
	char cHanguel;

	cAlphabet = 'A';	// ���ĺ��� ������ ���� ��� 2 byte
	cHanguel = '��';		// 1 byte�� char���� �ѱ� ���� �ȵ�

	printf("Alphabet : %c / Hanguel : %c\n", cAlphabet, cHanguel);
	char cHarray[] = "��";			// �ѱ� ���� �� ���ڿ� ���
	printf("%s\n\n", cHarray);		// ���ڿ� ���Ǵ� �� ��;

	printf("%d\n\n", sizeof(cHarray));

	char Buffer[128];// = "ABCDEFG";

	Buffer[128] = 'A';
	*/




	/*
	char* cpArray = (char*)"Character Pointer Array";

	printf_s("&cpArray    : %d\n", &cpArray);
	printf_s("cpArray     : %d\n", cpArray);
	printf_s("&cpArray[0] : %d\n", &cpArray[0]);
	printf_s("cpArray     : %s\n\n", cpArray);

	printf_s("*cpArray    : %c\n", *cpArray);
	printf_s("cpArray[0]  : %c\n", cpArray[0]);
	printf_s("cpArray[1]  : %c\n\n", cpArray[1]);

	printf_s("*cpArray++  : %c\n", *cpArray++);
	printf_s("cpArray     : %s\n", cpArray);
	printf_s("*cpArray--  : %c\n", *cpArray--);
	printf_s("cpArray     : %s\n\n", cpArray);

	printf_s("cpArray     : %d\n", cpArray);
	printf_s("*cpArray    : %c\n", *cpArray);
	cpArray++;
	printf_s("cpArray     : %d\n", cpArray);
	printf_s("cpArray[0]  : %c\n\n", cpArray[0]);
	*/






	/*
	// ** [Swap]
	int i = 10;
	int j = 20;

	printf_s("i : %d\n", i);
	printf_s("j : %d\n", j);

	//** Swap
	int Temp = i;
	i = j;
	j = Temp;

	printf_s("i : %d\n", i);
	printf_s("j : %d\n", j);
	*/



	/*
	// ** ���� �Լ� �ʱ�ȭ
	srand(time(NULL));

	int i = rand() % 45 + 1; // ** �����Լ�

	printf_s("%d\n", i);
	*/


	const int Max = 7;

	int Numbers[8];

	time_t tTime = time(NULL);
	int i = 0;
	
	/*
	while (true)
	{
		if (tTime < time(NULL))
		{
			tTime = time(NULL);

			srand(time(NULL));
			Numbers[i] = rand() % 45 + 1;

			//printf_s("%d  ", Numbers[i]);

			i++;

			if (i >= Max)
				break;
		}
	}
	*/

	for (int i = 0; i < Max; ++i)
	{
		srand(time(NULL) * (time(NULL) + i));
		Numbers[i] = rand() % 45 + 1;
	}


	for (int i = 0; i < Max; ++i)
		printf_s("%d  ", Numbers[i]);

	printf_s("\n");

	return 0;
}