#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100
#define SELECT_SIZE 10

int compare(const void* a, const void* b) {
    return (*(int*)b - *(int*)a); // �������� ����
}

int main() {
    int scores[SIZE];
    int selected[SELECT_SIZE];
    int i;

    srand(time(NULL)); // ���� �õ� �ʱ�ȭ

    // 1. 0~100 ������ ������ ���� 100�� ����
    for (i = 0; i < SIZE; i++) {
        scores[i] = rand() % 101;
    }

    // 2. 100���� ���� �߿��� 10�� ���� ����
    for (i = 0; i < SELECT_SIZE; i++) {
        selected[i] = scores[rand() % SIZE];
    }

    // 3. ���õ� 10�� �� �� �ִ� ã��
    qsort(selected, SELECT_SIZE, sizeof(int), compare);
    int max_value = selected[0];

    // ��� ���
    printf("���õ� 10���� ����: ");
    for (i = 0; i < SELECT_SIZE; i++) {
        printf("%d ", selected[i]);
    }
    printf("\n�ִ�: %d\n", max_value);

    return 0;
}
