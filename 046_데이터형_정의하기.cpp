#include <stdio.h>

#define true	1
#define false	0

bool;	// ���ο� ���������� bool���� �����Ѵ�.

int main()
{
	bool bCondition;	// bool�� ���� bCondition�� �����Ѵ�.

	bCondition = true;

	if (bCondition == true)
	{
		printf("���ǽ��� true�Դϴ�.");
	}
}

/*
- C++�̶� �����Ǿ�����... typedef���� ����ü, ����ü, ���������� ����� �� �ִ�.
- Windows API ���α׷��ֿ� ���Ǵ� INT, UNIT���� ������ ���� ����Ǿ� �ִ�.
	: typedef int INT;
	: typedef unsigned int UNIT;
- API(Application Programming Interface) : ����Ʈ���� ���ø����̼��� �����ϱ� ���� �������� �Լ��� ����.
*/