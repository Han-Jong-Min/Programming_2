/* ���ϸ�: PA7.09.c

  * ����: 1~12���� �ڵ��� ����� �迭�� �����ϰ� ȭ�鿡 ���� �׷����� ����ϴ� ���α׷���
          �ۼ��Ͻÿ�. 12������ �ڵ��� ����� ����ִ� �迭�� Ư�� ������ �ʱ�ȭ�ؼ� ����ϰ�,
		  �ڵ��� ��� 2000�� �� '*'�� �ϳ��� ���� �׷����� ����Ѵ�.

  * �ۼ���: ������

  * ��¥: 2025.09.16.

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MONTHS 12
#define UNIT 2000  // 2000�� �� '*' �ϳ�

int assignment09(void);
void initFees(int fees[], int size);
void printBarGraph(int fees[], int size);

int main() {
    return assignment09();
}

int assignment09(void) {
    int fees[MONTHS];

    // ��� �迭 �ʱ�ȭ
    initFees(fees, MONTHS);

    // ���� �׷��� ���
    printf("===== 1~12�� �ڵ��� ��� ���� �׷��� =====\n");
    printBarGraph(fees, MONTHS);

    return 0;
}

/*
 * �Լ���: initFees()
 * ���: ��� �迭�� Ư�� ������ �ʱ�ȭ�Ѵ�.
 */
void initFees(int fees[], int size) {
    int temp[MONTHS] = {
        25000, 30000, 28000, 35000, 40000, 32000,
        27000, 31000, 33000, 29000, 36000, 34000
    };

    for (int i = 0; i < size; i++) {
        fees[i] = temp[i];
    }
}

/*
 * �Լ���: printBarGraph()
 * ���: ����� �������� '*' ���� �׷����� ����Ѵ�.
 */
void printBarGraph(int fees[], int size) {
    for (int i = 0; i < size; i++) {
        int stars = fees[i] / UNIT;  // '*' ���� ���
        printf("%2d�� (%5d��): ", i + 1, fees[i]);
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }
}
