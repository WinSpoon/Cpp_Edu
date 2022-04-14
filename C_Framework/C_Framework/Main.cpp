#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <string>
#include <time.h>


const int PLAYER	= 0;
const int ENEMY		= 1;
const int MAX		= 2;


typedef struct tagInfo
{
	char* Name;
	int HP;
	int MP;

	int EXP;

	float Att;
	float Def;

	int Level;
	
}INFO;


typedef struct tagObject
{
	INFO Info;

}OBJECT;




void InitializeObject(OBJECT* _Obj, int ObjectType);
char* SetName();


int main(void)
{
	/*
	OBJECT* Player = (OBJECT*)malloc(sizeof(OBJECT));
	InitializeObject(Player, TYPE_PLAYER);

	OBJECT* Enemy = (OBJECT*)malloc(sizeof(OBJECT));;
	InitializeObject(Enemy, TYPE_ENEMY);
	*/

	OBJECT* Objects[MAX];

	Objects[PLAYER] = (OBJECT*)malloc(sizeof(OBJECT));
	InitializeObject(Objects[PLAYER], PLAYER);

	Objects[ENEMY] = (OBJECT*)malloc(sizeof(OBJECT));
	InitializeObject(Objects[ENEMY], ENEMY);


	while (true)
	{
		// ** 콘솔창을 모두 지움.
		system("cls");

		printf_s("\n[%s]\n", Objects[PLAYER]->Info.Name);
		printf_s("HP : %d\n", Objects[PLAYER]->Info.HP);
		printf_s("MP : %d\n", Objects[PLAYER]->Info.MP);
		printf_s("공격력 : %.2f\n", Objects[PLAYER]->Info.Att);
		printf_s("방어력 : %.2f\n", Objects[PLAYER]->Info.Def);
		printf_s("EXP : %d\n", Objects[PLAYER]->Info.EXP);
		printf_s("Level : %d\n\n", Objects[PLAYER]->Info.Level);

		printf_s("[%s]\n", Objects[ENEMY]->Info.Name);
		printf_s("HP : %d\n", Objects[ENEMY]->Info.HP);
		printf_s("MP : %d\n", Objects[ENEMY]->Info.MP);
		printf_s("공격력 : %.2f\n", Objects[ENEMY]->Info.Att);
		printf_s("방어력 : %.2f\n", Objects[ENEMY]->Info.Def);
		printf_s("EXP : %d\n", Objects[ENEMY]->Info.EXP);
		printf_s("Level : %d\n\n", Objects[ENEMY]->Info.Level);

		int iChoice = 0;
		printf_s("몬스터와 만났습니다. 공격하시겠습니까 ?\n1. 공격\n2. 도망\n입력 : ");
		scanf_s("%d", &iChoice);

		switch (iChoice)
		{
		case 1:
			if (Objects[PLAYER]->Info.Att > Objects[ENEMY]->Info.Def)
			{
				Objects[ENEMY]->Info.HP -= Objects[PLAYER]->Info.Att - Objects[ENEMY]->Info.Def;
			}
			else
				Objects[ENEMY]->Info.HP -= 1;
			break;
		case 2:
			printf_s("도망치는것에 [성공] 했습니다.\n");
			break;
		}
	}
	
	return 0;
}




void InitializeObject(OBJECT* _Obj, int ObjectType)
{
	switch (ObjectType)
	{
	case PLAYER:
		_Obj->Info.Name = SetName();

		_Obj->Info.Att = 10;
		_Obj->Info.Def = 10;
		_Obj->Info.EXP = 0;
		_Obj->Info.HP = 100;
		_Obj->Info.MP = 10;
		_Obj->Info.Level = 1;
		break;
	case ENEMY:
		_Obj->Info.Name = (char*)"Enemy";

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
	char Buffer[128] = "";

	printf_s("이름 입력 : ");
	scanf("%s", Buffer);

	char* pName = (char*)malloc(strlen(Buffer) + 1);
	strcpy(pName, Buffer);

	return pName;
}
