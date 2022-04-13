#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string>
#include <time.h>




char* SetName()
{
	char Buffer[1024] = "";

	printf("당신의 이름을 입력하세요.\n");
	printf("입력 : ");

	scanf("%s", Buffer);

	//     결과값을 받아올 포인터 변수 (힘영역에 저장된 문자열의 주소를 받아옴)
	//     ▽        
	//     ▽        힙 영역에 저장될 문자열의 형태
	//     ▽        ▽     
	//     ▽        ▽     malloc(크기) = 동적할당
	//     ▽        ▽     ▽        
	//     ▽        ▽     ▽        strlen(문자열) = 문자열의 길이를 반환
	//     ▽        ▽     ▽        ▽
	char* pName = (char*)malloc(strlen(Buffer) + 1);
	//△            △
	//└─────────────┘    같은 형태이어야 한다.


	// ** strcpy(복상할 위치, 복사대상);
	// ** strcpy(pName, Buffer);  Buffer 를 pName으로 복사함.
	strcpy(pName, Buffer);

	return pName;
}



int main(void)
{
	/*
	printf("게임이 시작됩니다.\n");

	char Buffer[128] = "";
	char* pName = SetName();

	printf("당신의 이름은 [%s] 이군요 !!\n", pName);
	*/



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
	// ** 랜덤 함수 초기화
	srand(time(NULL));

	int i = rand() % 45 + 1; // ** 랜덤함수

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