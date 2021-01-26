#include <stdio.h>

#define true	1
#define false	0

bool;	// 새로운 데이터형인 bool형을 선언한다.

int main()
{
	bool bCondition;	// bool형 변수 bCondition을 정의한다.

	bCondition = true;

	if (bCondition == true)
	{
		printf("조건식은 true입니다.");
	}
}

/*
- C++이라 생략되었지만... typedef문은 구조체, 공용체, 열거형에서 사용할 수 있다.
- Windows API 프로그래밍에 사용되는 INT, UNIT형은 다음과 같이 선언되어 있다.
	: typedef int INT;
	: typedef unsigned int UNIT;
- API(Application Programming Interface) : 소프트웨어 어플리케이션을 개발하기 위한 여러가지 함수의 집합.
*/