#include <stdio.h>



int main(void)
{
	/*
	char cAlphabet;
	char cHanguel;

	cAlphabet = 'A';	// 알파벳을 제외한 언어는 모두 2 byte
	cHanguel = '한';		// 1 byte인 char형에 한글 저장 안됨

	printf("Alphabet : %c / Hanguel : %c\n", cAlphabet, cHanguel);
	char cHarray[] = "한";			// 한글 저장 시 문자열 사용
	printf("%s\n\n", cHarray);		// 문자열 정의는 “ “;

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