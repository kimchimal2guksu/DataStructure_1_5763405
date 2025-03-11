#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100
#define SELECT_SIZE 10

int compare(const void* a, const void* b) {
    return (*(int*)b - *(int*)a); // 내림차순 정렬
}

int main() {
    int scores[SIZE];
    int selected[SELECT_SIZE];
    int i;

    srand(time(NULL)); // 랜덤 시드 초기화

    // 1. 0~100 사이의 랜덤한 정수 100개 생성
    for (i = 0; i < SIZE; i++) {
        scores[i] = rand() % 101;
    }

    // 2. 100개의 점수 중에서 10개 랜덤 선택
    for (i = 0; i < SELECT_SIZE; i++) {
        selected[i] = scores[rand() % SIZE];
    }

    // 3. 선택된 10개 값 중 최댓값 찾기
    qsort(selected, SELECT_SIZE, sizeof(int), compare);
    int max_value = selected[0];

    // 결과 출력
    printf("선택된 10개의 점수: ");
    for (i = 0; i < SELECT_SIZE; i++) {
        printf("%d ", selected[i]);
    }
    printf("\n최댓값: %d\n", max_value);

    return 0;
}
