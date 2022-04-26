#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <string>
#include <time.h>
#include <Windows.h>


// ** ���� : https://www.youtube.com/watch?v=_nuS86ITjIM


// ** ����	 0
// ** ��ο� �Ķ�	 1
// ** ��ο� �ʷ�	 2
// ** ��ο� �ϴ�	 3
// ** ��ο� ����	 4
// ** ��ο� ����	 5
// ** ��ο� ���	 6
// ** ȸ��	 7
// ** ��ο� ȸ��	 8
// ** �Ķ�	 9
// ** �ʷ�	 10
// ** �ϴ�	 11
// ** ����	 12
// ** ����	 13
// ** ���	 14
// ** �Ͼ�	 15



const int PLAYER = 0;
const int ENEMY = 1;
const int MAX = 2;

const int Scene_Logo = 0;
const int Scene_Menu = 1;
const int Scene_Stage = 2;
const int Scene_Exit = 3;

int SceneState = 0;

int Check = 1;

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


void SceneManager(OBJECT* _Player, OBJECT* _Enemy);
char* SetName();

void LogoScene();
void MenuScene();
void StageScene(OBJECT* _Player, OBJECT* _Enemy);

void InitializePlayer(OBJECT* _Player);
void PlayerScene(OBJECT* _Player);

void InitializeEnemy(OBJECT* _Enemy);
void EnemyScene(OBJECT* _Enemy);


void SetPosition(int _x, int _y, char* _str, int _Color = 15);
void SetColor(int _Color);
void HideCursor();

int main(void)
{
	// ** Ŀ���� �Ⱥ��̰� ��.
	HideCursor();

	// ** �ܼ�â�� ����� ����.
	system("mode con:cols=120 lines=30");

	// ** �ݼ�â�� �̸��� ����
	system("title ȫ�浿 Framework v0.6");
	
	// ** ��ü ������ ������.
	//system("color 70");


	OBJECT* Player = (OBJECT*)malloc(sizeof(OBJECT));
	InitializePlayer(Player);

	OBJECT* Monster = (OBJECT*)malloc(sizeof(OBJECT));
	InitializeEnemy(Monster);

	DWORD dwTime = GetTickCount(); // 1/1000 (1000���� 1��)
	int Delay = 1000;

	int UpCount = 0;

	while (true)
	{
		if (dwTime + Delay < GetTickCount()) 
		{
			dwTime = GetTickCount();

			// ** �ܼ�â�� �ִ� ��� ������ ����.
			system("cls");

			printf_s("%s\n", Player->Name);

			// ** ���� ����
			SceneManager(Player, Monster);
		}
	}

	return 0;
}

void SceneManager(OBJECT* _Player, OBJECT* _Enemy)
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
		StageScene(_Player, _Enemy);
		break;
	case Scene_Exit:

		exit(NULL);// ** ���α׷� ����
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

	// ** Buffer �� ���� ���ڿ��� pName ���� ����.
	strcpy(pName, Buffer);

	// ** ��ȯ.
	return pName;
}

void LogoScene()
{
	int Width = (120 / 2) - (strlen("      ,gggg,     _,gggggg,_        ,gg,         _,gggggg,_      ") / 2);
	int Height = 10;

	SetPosition(Width, Height + 1, (char*)"      ,gggg,     _,gggggg,_        ,gg,         _,gggggg,_      ");
	SetPosition(Width, Height + 2, (char*)"      d8` `8I   ,d8P``d8P`Y8b,     i8``8i      ,d8P``d8P`Y8b,   ");
	SetPosition(Width, Height + 3, (char*)"      88  ,dP  ,d8'   Y8   `8b,dP  `8,,8'     ,d8'   Y8   `8b,dP");
	SetPosition(Width, Height + 4, (char*)"   8888888P`   d8'    `Ybaaad88P'   `Y88aaad8 d8'    `Ybaaad88P'");
	SetPosition(Width, Height + 5, (char*)"      88       8P       `````Y8      d8````Y8,8P       `````Y8  ");
	SetPosition(Width, Height + 6, (char*)"      88       8b            d8     ,8P     8b8b            d8  ");
	SetPosition(Width, Height + 7, (char*)" ,aa,_88       Y8,          ,8P     dP      Y8Y8,          ,8P  ");
	SetPosition(Width, Height + 8, (char*)"dP` `88P       `Y8,        ,8P' _ ,dP'      I8`Y8,        ,8P'  ");
	SetPosition(Width, Height + 9, (char*)"Yb,_,d88b,,_    `Y8b,,__,,d8P'  `888,,_____,dP `Y8b,,__,,d8P'   ");
	SetPosition(Width, Height + 10, (char*)" `Y8P`  `Y88888   ``Y8888P`'    a8P`Y888888P`    ``Y8888P`'     ");

	Sleep(5000);

	SceneState++;
}

void MenuScene()
{
	printf_s("MenuScene\n");

	printf_s("���� �� ����??\n1. �̵�\n2. ����\n�Է� : ");

	int i = 0;
	scanf("%d", &i);

	if (i == 1)
		SceneState++;
	else if (i == 2)
		SceneState = Scene_Exit;
}

void StageScene(OBJECT* _Player, OBJECT* _Enemy)
{	
	// ** ����
	PlayerScene(_Player);
	EnemyScene(_Enemy);
}

void InitializePlayer(OBJECT* _Player)
{
	_Player->Name = SetName();

	_Player->Info.Att = 10;
	_Player->Info.Def = 10;
	_Player->Info.EXP = 0;
	_Player->Info.HP = 100;
	_Player->Info.MP = 10;
	_Player->Info.Level = 1;
}

DWORD SetnameTime = 0;

void PlayerScene(OBJECT* _Player)
{
	if (SetnameTime + 10000 < GetTickCount())
		Check = 1;

	if (Check)
	{
		SetnameTime = GetTickCount();

		_Player->Name = SetName();
		Check = 0;
	}
}

void InitializeEnemy(OBJECT* _Enemy)
{
	_Enemy->Name = (char*)"Enemy";

	_Enemy->Info.Att = 5;
	_Enemy->Info.Def = 15;
	_Enemy->Info.EXP = 0;
	_Enemy->Info.HP = 30;
	_Enemy->Info.MP = 5;
	_Enemy->Info.Level = 1;
}

void EnemyScene(OBJECT* _Enemy)
{

}



void SetPosition(int _x, int _y, char* _str, int _Color)
{
	COORD Pos = { _x, _y };

	SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	SetColor(_Color);

	printf_s("%s", _str);
}


void SetColor(int _Color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), _Color);
}



void HideCursor()
{
	CONSOLE_CURSOR_INFO Info;

	Info.dwSize = 1;
	Info.bVisible = false;

	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}