#include <stdio.h>

#define		HUNDRED		100	// 문자형 상수 HUNDRED는 프로그램이 종료될 때까지 100이라는 값을 가짐. 변경하고 싶을 때는 문자형 변수를 사용해야 함.

const char j = 10;	// 문자형 상수 j는 프로그램이 종료될 때까지 10이라는 값을 가짐. j의 값 또한 변경될 수 없음.

int main(void)
{
	HUNDRED = 200;	// 에러 발생 : 대입 연산자의 왼쪽에는 변수가 와야 하는데, 값을 바꿀 수 없는 상수가 왔기 때문에 발생함.
	j = 200;	// 에러 발생 : 마찬가지.

	printf("문자형 상수 HUNDRED의 값은 %d\n", HUNDRED);
	printf("문자형 상수 j의 값은 %d\n", j);
}
/*
- 문자형 상수는 문자형 변수를 대신하여 사용되는 값이며, 프로그램의 실행 시간동안 바뀌어서는 안 되는 값을 정의하고자 할 때 사용한다.
- 문자형 상수를 정의하는 방법은 두 가지가 있는데, #define 문과 const char형을 이용하는 것이다.
- 두 선언의 차이는 데이터형을 명확하게 구분하느냐, 구분하지 않느냐로 구별된다. HUNDRED가 실제로 문자형인지 정수형인지 정확한 구별이 없는 반면, j라는 상수는 const char에 의해 정의되어 문자형 상수임을 정확하게 구별됨.
- 9, 10번째 줄을 주석처리하면 컴파일할 수 있다.
- 프로그래밍 시에 사용되는 문자 상수
	- \n : printf() 함수 등에 의해 출력을 다음 줄로 이동하는 역할
	- \t : 4개 또는 8개의 공백을 띄는 역할
	- \\ : 슬래시를 문자 또는 문자열에서 사용
	- \0 : 널(0) 문자임을 표시
*/