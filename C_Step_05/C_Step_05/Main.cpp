#include <stdio.h>



// ** �������� �����
int Count;


// ** �Ű� ������ �ش� ������ ����� ����.
float GetAngle(float _deg)
{
	{
		// ** ���� ������ ����� �����.
		int deg = 10;
	}

	// ** �������� ���
	Count = 10;

	return _deg + 10;
}


// ** return & returning type
float Sum(float _i, float _j)
{
	return _i + _j;
}


int main(void)
{
	// ** ������ �̸��� ���ٸ� �ش� ������ �ִ� ������ �켱������ ��.
	int val = 10;

	if (val == 10)
	{
		// ** �ش� �������ο��� ���� ������ �ִ� ������ �̸��� �����ϰ� ���� ����.
		int val = 20;

		// ** �̷��� ��쿡�� �ش� ������ �ִ� ������ �켱������ �ȴ�.
		printf_s("%d\n", val);
	}


	// ** �ش� �Լ� ���ο��� ���������� Count �� 10���� �ʱ�ȭ ��.
	GetAngle(3.141592f);

	// ** �������� ���
	printf_s("Count : %d\n", Count);



	// ** ���� ���� ���
	Count = 20;

	// ** �������� ���
	printf_s("Count : %d\n", Count);

	//int Result = Sum(10, 20);
	
	printf_s("Result : %f\n", Sum(3.1415f, 3.1415f));


	return 0;
}