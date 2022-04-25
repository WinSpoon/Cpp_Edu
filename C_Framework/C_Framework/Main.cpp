#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <string>
#include <time.h>
#include <Windows.h>


const int PLAYER = 0;
const int ENEMY = 1;
const int MAX = 2;

const int Scene_Logo = 0;
const int Scene_Menu = 1;
const int Scene_Stage = 2;
const int Scene_Exit = 3;

int SceneState = 0;




// ** ���� �ɷ�ġ 
typedef struct tagInfo
{
	int HP;
	int MP;

	int EXP;

	float Att;
	float Def;

	int Level;

}INFO;


// ** ������Ʈ�� ������ ��������.
typedef struct tagObject
{
	char* Name;
	INFO Info;

}OBJECT;

OBJECT* Objects[MAX];


void SceneManager();
void InitializeObject(OBJECT* _Obj, int ObjectType);
char* SetName();

void LogoScene();
void MenuScene();
void StageScene();

/*
void Func1(int _i, int _n)
{
	_i = 100;
	_n = 200;

	printf_s("Func1 _i: %d\n", _i);
	printf_s("Func1 _n: %d\n", _n);
}


void Func2(int* _i, int* _n)
{
	*_i = 100;
	*_n = 200;

	printf_s("Func2 *_i: %d\n", _i);
	printf_s("Func2 *_n: %d\n", _n);
}
*/



int main(void)
{
	/*
	int iNumber1 = 10;
	int iNumber2 = 20;

	printf_s("iNumber1: %d\n", &iNumber1);	// ** iNumber1�� �ּҰ� ���
	printf_s("iNumber2: %d\n\n", &iNumber2);  // ** iNumber2�� �ּҰ� ���

	// ** ������ ����
	Func1(iNumber1, iNumber2);

	printf_s("Func1 iNumber1: %d\n", iNumber1);  // ** iNumber1�� �� ���
	printf_s("Func1 iNumber2: %d\n\n", iNumber2);  // ** iNumber2�� �� ���

	// ** �ּ� ����
	Func2(&iNumber1, &iNumber2);

	printf_s("Func2 iNumber1: %d\n", iNumber1);  // ** iNumber1�� �� ���
	printf_s("Func2 iNumber2: %d\n", iNumber2);  // ** iNumber2�� �� ���
	*/
	return 0;
}

void SceneManager()
{
	switch (SceneState)
	{
	case Scene_Logo:
		LogoScene();
		break;
	case Scene_Menu:
		MenuScene();
		break;
	case Scene_Stage:
		StageScene();
		break;
	case Scene_Exit:

		exit(NULL);// ** ���α׷� ����
		break;
	}
}

void InitializeObject(OBJECT* _Obj, int _Key)
{
	switch (_Key)
	{
	case PLAYER:
		_Obj->Name = SetName();

		_Obj->Info.Att = 10;
		_Obj->Info.Def = 10;
		_Obj->Info.EXP = 0;
		_Obj->Info.HP = 100;
		_Obj->Info.MP = 10;
		_Obj->Info.Level = 1;
		break;
	case ENEMY:
		_Obj->Name = (char*)"Enemy";

		_Obj->Info.Att = 5;
		_Obj->Info.Def = 15;
		_Obj->Info.EXP = 0;
		_Obj->Info.HP = 30;
		_Obj->Info.MP = 5;
		_Obj->Info.Level = 1;
		break;
	}
}

char* SetName()
{
	// ** scanf �Լ��� ���ڿ��� �Է¹ޱ� ���� ���ڿ��� �������ִ� �迭�� ����.
	char Buffer[128] = "";

	printf_s("�̸� �Է� : ");

	// ** ���ڿ��� �Է� ����.
	scanf("%s", Buffer);

	// ** �Է� �������� �迭 ������, ��ȯ ���� ĳ���� ���������̹Ƿ� ���ڿ��� ���������.
	// ** ���ڿ��� ���� �ϱ����� �����Ͱ� ����Ű�� ������ �Է¹��� ���ڿ��� ��ư���ŭ�� ũ��� �޸� �Ҵ�.
	char* pName = (char*)malloc(strlen(Buffer) + 1);

	// ** Buffer �� ���� ���ڿ��� pName ���� ���� 
	strcpy(pName, Buffer);

	// ** ��ȯ.
	return pName;
}

void LogoScene()
{
	printf_s("LogoScene\n");
	SceneState++;
}

void MenuScene()
{
	printf_s("MenuScene\n");

	printf_s("���� �� ����??\n1. �̵�\n2. ����\n�Ϸ� : ");

	int i = 0;
	scanf("%d", &i);


	if (i == 1)
		SceneState++;
	else if (i == 2)
		SceneState = Scene_Exit;
}

void StageScene()
{
	int iLoopCheck = 1;

	while (iLoopCheck)
	{
		// ** �ܼ�â�� ��� ����.
		//system("cls");

		printf_s("\n[%s]\n", Objects[PLAYER]->Name);
		printf_s("HP : %d\n", Objects[PLAYER]->Info.HP);
		printf_s("MP : %d\n", Objects[PLAYER]->Info.MP);
		printf_s("���ݷ� : %.2f\n", Objects[PLAYER]->Info.Att);
		printf_s("���� : %.2f\n", Objects[PLAYER]->Info.Def);
		printf_s("EXP : %d\n", Objects[PLAYER]->Info.EXP);
		printf_s("Level : %d\n\n", Objects[PLAYER]->Info.Level);

		printf_s("[%s]\n", Objects[ENEMY]->Name);
		printf_s("HP : %d\n", Objects[ENEMY]->Info.HP);
		printf_s("MP : %d\n", Objects[ENEMY]->Info.MP);
		printf_s("���ݷ� : %.2f\n", Objects[ENEMY]->Info.Att);
		printf_s("���� : %.2f\n", Objects[ENEMY]->Info.Def);
		printf_s("EXP : %d\n", Objects[ENEMY]->Info.EXP);
		printf_s("Level : %d\n\n", Objects[ENEMY]->Info.Level);

		// ** ������ �Լ�   1/1000   (1000 = 1��)
		Sleep(500);

		int iChoice = 0;
		printf_s("���Ϳ� �������ϴ�. �����Ͻðڽ��ϱ� ?\n1. ����\n2. ����\n�Է� : ");
		scanf_s("%d", &iChoice);


		int i = int(10.0f - 5.0f);

		switch (iChoice)
		{
		case 1:
			if (Objects[PLAYER]->Info.Att > Objects[ENEMY]->Info.Def)
			{
				Objects[ENEMY]->Info.HP -= int(Objects[PLAYER]->Info.Att - Objects[ENEMY]->Info.Def);
			}
			else
				Objects[ENEMY]->Info.HP -= 1;

			if (Objects[ENEMY]->Info.Att > Objects[PLAYER]->Info.Def)
			{
				Objects[PLAYER]->Info.HP -= int(Objects[ENEMY]->Info.Att - Objects[PLAYER]->Info.Def);
			}
			else
				Objects[PLAYER]->Info.HP -= 1;

			iLoopCheck = 0;
			break;
		case 2:

			int iRand = rand() % 100;

			if (iRand < 10)
			{
				printf_s("����ġ�°Ϳ� [����] �߽��ϴ�.\n");
				iLoopCheck = 0;
			}
			else
			{
				printf_s("����ġ�°Ϳ� [����] �߽��ϴ�.\n");
				printf_s("������ ���۵˴ϴ�.\n");
				iChoice = 1;
			}

			Sleep(1500);
			break;
		}
	}
}
