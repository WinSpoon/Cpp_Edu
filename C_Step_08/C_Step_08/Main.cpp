#include <stdio.h>
#include <malloc.h>


int main(void)
{
	/*
	int iNumber1 = 10;
	int iNumber2 = 100;

	printf_s("iNumber1 : %d\n", iNumber1);
	printf_s("iNumber2 : %d\n", iNumber2);

	printf_s("iNumber1 �ּҰ�   : %d\n", &iNumber1);
	printf_s("iNumber2 �ּҰ�   : %d\n", &iNumber2);
	*/






	/*
	int iNumber1 = 10;
	int iNumber2 = 100;

	int* pPointer = &iNumber2;

	printf_s("%d\n", pPointer);
	printf_s("%d\n", &iNumber2);

	printf_s("%d\n", *pPointer);
	
	iNumber2 = 50;
	printf_s("%d\n", *pPointer);
	*/



	/*
	int iNumber = 19;
	int* piNumber = &iNumber;

	printf_s("iNumber   : %d\n", iNumber);
	printf_s("*piNumber : %d\n", *piNumber);
	printf_s("piNumber  : %d\n", piNumber);
	printf_s("&iNumber  : %d\n", &iNumber);
	printf_s("&piNumber : %d\n\n", &piNumber);
	*/
	


	/*
	int iNumber1 = 19;
	int iNumber2 = iNumber1;

	int* pPointer1 = &iNumber1;
	int* pPointer2 = &iNumber2;

	printf_s("pPointer1 : %d\n", *pPointer1);

	iNumber1 = 100;

	printf_s("pPointer2 : %d\n", *pPointer2);
	*/






	// ** ���� �Ҵ�.
	//int* pNumber = (int*)malloc(sizeof(int));



	/*
	printf_s("char    : %d\n", sizeof(char));
	printf_s("short	   : %d\n", sizeof(short));
	printf_s("long	   : %d\n", sizeof(long));
	printf_s("int	   : %d\n", sizeof(int));
	printf_s("float	   : %d\n", sizeof(float));
	printf_s("double : %d\n\n", sizeof(double));

	printf_s("char*    : %d\n", sizeof(char*));
	printf_s("short*   : %d\n", sizeof(short*));
	printf_s("long*    : %d\n", sizeof(long*));
	printf_s("int*	    : %d\n", sizeof(int*));
	printf_s("float*    : %d\n", sizeof(float*));
	printf_s("double* : %d\n\n", sizeof(double*));
	*/











	// ** [������ ��� ��� 3 ����]
	// ** 1. [*] = ������   [&] = �ּ�
	// ** 2. ������ ������� ������ [�����Ҵ�]�� ���ֵ��� �Ѵ�.
	// ** 3. [.] �ƴϸ� [->]ȭ��ǥ

	return 0;
}



