#include <stdio.h>

int main(void)
{
	/*
	// ** ���� ����
	int a;
	int b;

	// ** ����� ���ÿ� �ʱ�ȭ
	int c = 30, d = 40;

	// ** �ʱ�ȭ
	a = 10;
	b = 20;

	printf_s("%d %d \n", a, b);
	printf_s("%d %d \n", c, d);
	*/








	/*
	// ** ���� ����
	float fNumber;

	// ** ���� �ʱ�ȭ
	fNumber = 87.654321;

	// ** ���
	printf_s("%f\n", fNumber);	// ���¿� �˸��� ���
	printf_s("%d\n", (int)fNumber);	// float���� int������ ��ȯ
	printf_s("%c\n", (char)fNumber);	// float���� char������ ��ȯ
	printf_s("%d\n", fNumber);	// ���¿� �˸��� ���� ���. ������ �� ���.
	*/






	/*
	// ** �Ǽ��� Ÿ���� ������
	float fPI = 3.141592f;


	// ** ������ Ÿ���� ������ �����ϸ�
	// ** �Ҽ��� �����ʹ� �ҽ� �ȴ�.
	int i = fPI;

	printf_s("%02d\n", i);  // 3
	printf_s("%0.3f\n", fPI);
	*/



	/*
	// ** ���Ĺ��� ��� ��
	printf_s("%d\n", 3.14);		// 1374389535
	printf_s("%d\n", 314);		// 314
	printf_s("%d\n", 0x13a);	// 314

	printf_s("%x\n", 0x13a);	// 13a
	printf_s("%X\n", 0X13A);	// 13A
	*/




	/*
	// ** ���ڴ� ������ 
	printf_s("%d\n", 'A');	// 65
	printf_s("%c\n", 65);	// A
	printf_s("%x\n", 'A');	// 41
	printf_s("%c\n", 'A');	// A
	*/




	/*
	// ** ����� ��� ��
	int iNum;			// ���� ���� ���� int �� 
	float fNum;		// ���� ���� ���� float ��

	printf_s("iNum �� �Է� : ");
	scanf_s("%d", &iNum);	// scanf_s(); �� ���� �Է��ϰ� ��&�� �� ���� �� 				// ��ġ�� �����ش�
	printf_s("fNum �� �Է� : ");
	scanf_s("%f", &fNum);

	printf_s("iNum : %d\n", iNum);
	printf_s("fNum : %f\n", fNum);
	*/



	// ** ����� �Լ��� ���Ĺ��� �� ���ް��� ���� ����(���� ����)
	//printf_s("fNum : %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);





	/*
	int i = 0;
	scanf_s("�Է� : %d", &i);  // X
	// ** �Է� �Լ��� �ƹ��� ��� ������ �ᵵ ��µ��� ����.


	
	printf_s("�Է� : ");
	scanf_s("%d", &i); // O
	*/


	// ** printf_s("%d\n", (10 != 10));



	return 0;
}
