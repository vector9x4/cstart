#include <stdio.h>

#define		HUNDRED_THOUSAND	100000	// 정수형 상수 HUNDRED_THOUSAND는 프로그램이 종료될 때까지 100000이라는 값을 가지며, 이 값은 바뀔 수 없다.

const int j = 200000;	// 정수형 상수 j는 프로그램이 종료될 까지 200000이라는 값을 갖고 있습니다. j의 값 또한 그 어떤 이유에 의해서도 변경될 수 없습니다.

main()
{
	HUNDRED_THOUSAND = 100000;	// 에러 발생 : 모든 상수에는 값을 대입할 수 없다.
	j = 200000;	// 에러 발생 : 9번째 줄과 동일한 에러 발생. 9, 10번째 줄을 주석 처리하면 컴파일이 가능하다. 

	printf("정수형 상수 HUNDRED_THOUDAND의 값은 %d\n", HUNDRED_THOUSAND);
	printf("정수형 상수 j의 값은 %d\n", j);
}
/*
- 정수형 상수는 정수형 변수를 대신하여 사용되는 값이며, #define 문에 의해 선언하는 정수형 상수는 문자형 상수를 선언하는 방법과 같은 것을 볼 수 있다.
- 정수형 상수 역시 두 가지 방법으로 정의할 수 있는데, #define 문과 const int형으로 선언하는 것이다.
- define 문에 정의되면 정수형인지 정확한 구별이 없지만, const 문에 정의되면 정수형 상수임이 구별된다.
- 일반적으로는 #define 문이 많이 사용되며, 변수의 형이 특별히 중요할 경우 const int형을 사용한다.
- 정수형 상수를 사용할 때는 일반적으로 정수임을 나타내는 L(long) 또는 UL(unsigned long)을 사용하곤 한다.
	ex) #define	HUNDRED_THOUSAND 100000L
	    const int	j=200000UL;
*/
