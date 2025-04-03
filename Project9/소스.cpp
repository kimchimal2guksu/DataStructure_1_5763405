#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int fibo_rec(int n);

int fibo_rec(int n) {

	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		return fibo_rec(n - 1) + fibo_rec(n - 2);
	}
}

int fibo_itr(int n) {
	int f_n_2 = 0;
	int f_n_1 = 1;
	int f_n;

	for (int i = 2; i <= n; i++) {
		f_n = f_n_1 + f_n_2;
		f_n_2 = f_n_1;
		f_n_1 = f_n;
	}

	if (n == 0) return f_n_2;
	else if (n == 1) return f_n_1;
	else return f_n;

}

int main(void) {
	
	int n;
	int a;

	while (1) {

		printf("�Ǻ���ġ ���� ��� ���� (1: �����, 2: ��ȯ��, 0: ����) : ");
		scanf("%d", &a);

		if (a == 1) {
			printf("���� N�� �Է��ϼ��� (�����Ϸ��� 0 �Է�): ");
			scanf("%d", &n);
			printf("F(%d) = %d\n", n, fibo_rec(n));

			continue;
		}
		else if (a == 2) {
			printf("���� N�� �Է��ϼ��� (�����Ϸ��� 0 �Է�): ");
			scanf("%d", &n);
			printf("F(%d) = %d\n", n, fibo_itr(n));

			continue;
		}
		else if (a == 0) {
			printf("���α׷��� ����Ǿ����ϴ�.");

			break;
		}
		else {
			printf("�ٽ� �Է��ϼ���\n");

			continue;
		}
		return 0;
	}
}