#include <stdio.h>

#define	SEB "세바스찬"	// 문자열형 상수 SEB을 선언한다. 프로그램이 종료될 때까지 값을 유지한다.
#define SAM "샘"	// 문자열형 SAM을 선언한다. 프로그램이 종료될 때까지 값을 유지한다.

const char* SEBSAM = "세바스찬과 샘";	// 문자열형 상수 SEBSAM을 선언한다. SEBSAM은 프로그램이 종료될 때까지 설정된 값으로 사용된다.

int main()
{
	printf("문자열형 상수 SEB의 값 : %s\n", SEB);
	printf("문자열형 상수 SAM의 값 : %s\n", SAM);
	printf("문자열형 상수 SEBSAM의 값 : %s\n", SEBSAM);
}
/*
- 문자열형 상수 또한 다른 상수형과 마찬가지로 프로그램이 실행되는 동안 절대로 바뀌지 않아야 되는 값을 선언하고자 할 때 사용한다.
- 문자열형 상수를 정의하는 방법은 #define 문과 const char*형을 사용하는 것이다.
- 일반적으로는 #define 문이 많이 사용되며, 변수의 형이 특별히 중요할 경우에는 const char*이 사용된다.
/