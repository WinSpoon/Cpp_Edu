#include <stdio.h>



int main(void)
{
	printf_s("Hello, World!!\n");

	// ** [���Ĺ���]

	// ** [%c] = ���� ��� 
	// ** [%s] = ���ڿ� ���
	// ** [%d] = ���� ���
	// ** [%f] = �Ǽ� ���

	printf_s("char : %d\n", sizeof(char));
	printf_s("short : %d\n", sizeof(short));
	printf_s("int : %d\n", sizeof(int));
	printf_s("float : %d\n", sizeof(float));
	printf_s("long : %d\n", sizeof(long));
	printf_s("double : %d\n", sizeof(double));

	// ** sizeof( datatype ) = �ڷ����� ũ�⸦ ����Ʈ ������ ��ȯ������.


	// ** [\n] �ٹٲ�
	// ** [\t] ����




	printf_s("********************************************\n");
	printf_s("  Let��s Study C / C++ Game Programming!!!\n");
	printf_s("********************************************\n");

	//========[�� ��� ����� �Ʒ� ��� ����� ����.]=============

	printf_s("********************************************\n  Let��s Study C / C++ Game Programming!!!\n********************************************\n");




	return 0;
}

