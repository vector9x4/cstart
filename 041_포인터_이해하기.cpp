#include <stdio.h>

int main()
{
	int saram_A = 0;	// 정수형 변수 saram_A를 정의하고 0으로 초기화한다.
	int saram_B = 0;	// 정수형 변수 saram_B를 정의하고 0으로 초기화한다.
	int* pointer;	// 정수형 포인터 변수 pointer을 정의한다. 일반적인 변수의 정의와 달리 분신이 되기 위한 변수임을 알리는 별표가 사용되었다.
	int* psaram;	// 정수형 포인터 변수 psaram을 정의한다.

	pointer = &saram_A;	// 포인터 변수 pointer를 saram_A의 분신으로 지정한다. 일반적으로 변수를 그냥 대입하지만, 분신을 만들기 위해서는 분신 연산자(&)를 사용한다. &는 saram_A를 분신으로 만들어서 pointer에게 넘겨준다. 이 문장이 실행되면 sasram_A와 같은 기능을 할 수 있는 pointer라는 분신이 생긴다.
	*pointer = 1;	// pointer가 분신 변수이기 때문에 *이 붙는다. saram_A의 분신이 되고 나서 saram_A를 대신하여 사용할 때는 *pointer라고 해야 한다. 
	printf("%d, %d\n", saram_A, *pointer);	// 1, 1 : saram_A의 값은 0으로 초기화되었는데, saram_A를 출력해 보면 1이 나온다. pointer를 통해서 1을 대입 받았기 때문.

	psaram = &saram_A;	// saram_A의 분신을 하나 더 만들었다.
	*psaram = 2;	// 새로 생성한 분신에 2를 대입한다. saram_A=2 또는 *pointer=2와 완전히 같은 문장이다.
	printf("%d, %d, %d\n", saram_A, *pointer, *psaram);	// 2, 2, 2	: saram_A의 값은 1이었는데, psaram을 통해 2를 대입 받았기 때문에 2가 출력된다.

	pointer = &saram_B;	// saram_B의 분신으로 pointer를 지정한다. 이 때, pointer는 saram_A의 분신이면서 saram_B의 분신이 되는 것이 아니라, saram_B의 분신이 되며 saram_A의 분신 역할을 그만 둔다.
	*pointer = 3;	// sasram_B에 3을 대입한다. 이 문장은 saram_B=3과 완전히 동일하다.
	printf("%d, %d, %d\n", saram_A, saram_B, *pointer);	// 2, 3, 3	: 새로 지정한 pointer를 이용하여 saram_B에 3이 대입되었기 때문에 3을 출력한다.

	psaram = &saram_B;	// saram_B의 분신으로 psaram을 지정한다.
	*psaram = 4;
	printf("%d, %d, %d, %d\n", saram_A, saram_B, *pointer, *psaram);	// 2, 4, 4, 4
}

/*
- C언어는 컴퓨터의 하드웨어적인 부분과 밀접하게 관련되어 프로그래밍을 한다.
- C언어로 메모리를 직접 접근하기 위해 사용하는 것을 포인터라고 한다.
- 모든 포인터 변수는 *별표*가 사용된다.
- 문자열 포인터의 예
	: const char* pstr = "HAN";
	: pstr을 문자열 "HAN"을 대신해서 사용할 수 있는 분신으로 지정한다. 분신 연산자는 사용하지 않는다. 문자열 자체가 이미 분신이기 때문!
	: 문자열을 정의하면 문자열의 본체는 메모리의 어딘가에 저장되고, 그 분신이 자동적으로 만들어진다. 문자열은 항상 분신을 지니고 있기 때문에, 분신 연산자를 사용할 필요가 없다.
- 배열 포인터의 예
	: char string[100] = "HAN";
	: const char* pstr = string;
	: 문자형 포인터 pstr을 배열 변수에 대한 분신으로 지정한다. string은 문자열 "HAN"으로 초기화될 뿐, 문자열 "HAN"의 분신은 아니다. 단지 값을 넘겨받는 것 뿐!
	: pstr은 문자형 배열 변수 string의 분신으로 정의되었다. 역시 분신 연산자를 사용하지 않았는데, string이 배열을 대표하는 분신이기 때문이다.
	: 이 세 문장의 출력 결과는 완전히 같다. puts("HAN"); / puts(string); / puts(pstr); :: pstr이 string의 분신이기 때문에 string[0]과 pstr[0]은 그 값이 같다.
- 분신 연산자(&)는 C언어에서 번지 지정 연산자라고 한다. 포인터가 번지값을 저장하고 사용하는 것이기 때문. 어떤 경우에는 번지 연산자를 사용하고, 어떤 경우에는 사용하지 않는다.
	: 일반적인 문자형, 정수형, 실수형 등은 모두 번지 연산자를 사용해야 한다.
	: 문자열형, 배열형 등은 번지 연산자를 사용하지 말아야 한다.
	: 배열 요소에 따라 달라지기도 한다.
	: ex) char str[100] / const char *pstr; 일 때, pstr = str; / pstr = &str[0]; / pstr = &str[1];
*/