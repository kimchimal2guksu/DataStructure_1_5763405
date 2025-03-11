#include <stdio.h>

void second(unsigned n) {
	unsigned j = 0x80000000;
	for (int i = 0; i < 32; i++) {
		if((j&n) == j)
			printf("1");
		else
			printf("0");
		j >>= 1;
	}
}

int main() {
	unsigned n = 0;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &n);
	printf("\n입력된 정수의 32비트 표현 : ");
	second(n);

	return 0;
}