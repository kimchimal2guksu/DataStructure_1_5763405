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

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &n);
	printf("\n�Էµ� ������ 32��Ʈ ǥ�� : ");
	second(n);

	return 0;
}