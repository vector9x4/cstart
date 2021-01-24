#include <stdio.h>

int main()
{
	int i = 5;

	switch (i)	// i의 값에 대해 비교함을 명시
	{
	case1:	// i의 값이 1이라면 10~11번째 줄이 실행된다.
		printf("i는 1입니다.");
		break;	// switch 문을 종료하고 19번째 줄로 이동하라는 명령. 이 줄에 break 문이 없다면, i의 값이 2인 경우에 실행되는 13번째 줄로 이동함.
	case2:	// i의 값이 2라면 13~14번째 줄이 실행된다.
		printf("i는 2입니다.");
		break;
	default:	// if 문의 else 절에 해당하는 문장으로 i의 값이 일치되는 case 문이 없는 경우 기본적으로 실행될 문장을 사용한 것이다. else 절과 마찬가지로 default 문은 생략할 수 있다.
		printf("i는 %d입니다.", i);
		break;
	}
}

/*
- 조건 선택문(switch)은 정수형(문자형/함수식/문자 포함) 값만 비교할 수 있다.
*/