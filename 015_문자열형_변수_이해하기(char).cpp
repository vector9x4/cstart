#include <stdio.h>

int main()
{
	char str[] = "대한민국"; // 문자열 변수 str을 정의하고, 문자열을 "대한민국"으로 초기화. str[10]처럼 문자열의 길이보다 큰 값으로 정의할 수도 있습니다. 한글은 한 자당 길이가 2, 영문은 1이다.
	const char *j = "Hello World"; // C++11부터 char* 변수를 string literal로 직접 초기화할 수 없습니다. 라고 하시네요. 문자열 상수를 정의할 때는 const 붙이기!! > 후에 다시 보기

	printf("문자열형 변수 str의 값은 %s\n", str);
	printf("문자열형 변수 j의 값은 %s\n", j);
}
/*
- 문자열형 변수는 포인터와 아주 밀접한 관계가 있다. 포인터가 뭐냐고요? 그건 나중에...
- C2440에러에 대해
	: C2440 can be caused if you attempt to initialize a non-const char* (or wchar_t*) by using a string literal in C++ code, when the compiler conformance option /Zc:strictStrings is set. In C, the type of a string literal is array of char, but in C++, it is array of const char.
	"C에서는 문자열 리터럴이 char의 배열이지만, C++에서는 const char의 배열이다." 라고 합니다!!
*/