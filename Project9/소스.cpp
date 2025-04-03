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

		printf("피보나치 수열 방법 선택 (1: 재귀적, 2: 순환적, 0: 종료) : ");
		scanf("%d", &a);

		if (a == 1) {
			printf("정수 N을 입력하세요 (종료하려면 0 입력): ");
			scanf("%d", &n);
			printf("F(%d) = %d\n", n, fibo_rec(n));

			continue;
		}
		else if (a == 2) {
			printf("정수 N을 입력하세요 (종료하려면 0 입력): ");
			scanf("%d", &n);
			printf("F(%d) = %d\n", n, fibo_itr(n));

			continue;
		}
		else if (a == 0) {
			printf("프로그램이 종료되었습니다.");

			break;
		}
		else {
			printf("다시 입력하세요\n");

			continue;
		}
		return 0;
	}
}