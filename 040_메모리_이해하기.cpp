#include <stdio.h>

int main()
{
	int i = 0;	// 정수형 변수 i를 정의하고, 0으로 초기화한다. 운영체제는 i라는 정수형 변수가 저장될 수 있는 4바이트 공간을 확보하고, 그 번지를 j라는 변수 대신 사용한다.
	int j = 1;

	printf("값=%d, 메모리주소=%p\n", i, &i);	// 값=0, 메모리주소=0012FF7C
	printf("값=%d, 메모리주소=%p\n", i, &i);	// 값=1, 메모리주소=0012FF78 : printf() 함수는 변수가 실제 저장되어 있는 메모리 번지를 표현할 수 있다. 메모리 번지를 표현하기 위해 %p를 사용한다. 또한 변수도 메모리 번지를 넘겨주기 위하여 번지 지정 연산자&를 사용한다. &i라는 것은 i의 값이 아닌, i가 저장되어 있는 메모리 번지를 printf() 함수에 넘겨주기 위한 것이다.
}

/*
- 지금까지 정의하고 사용해왔던 모든 변수들은 그 변수가 정의되는 메로리 번지를 가지고 있으며, 모든 프로그램이 실행될 때는 내부적으로 변수의 이름이 아닌, 메모리의 번지에 의해 변수가 구분되고 값이 저장된다.
*/