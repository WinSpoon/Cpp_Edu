#include <stdio.h>



int main(void)
{
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










	return 0;
}