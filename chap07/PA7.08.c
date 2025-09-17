/* ���ϸ�: PA7.08.c

  * ����: ��ǰ ������ ����� ������ �迭�� ���Ͽ� �������� �Է¹޾� ���ε� ������
          ����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ��ǰ ������ ����� �迭�� ũ��� 5�̰�,
          ��ǰ ������ �Է¹޾Ƽ� ����Ѵ�. ���ε� ������ ������ �迭�� �����ؾ� �Ѵ�.

  * �ۼ���: ������

  * ��¥: 2025.09.16.

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 5

int assignment08(void);
void inputPrices(int arr[], int size);
void calcDiscount(int arr[], int discounted[], int size, int rate);
void printResult(int arr[], int discounted[], int size);

int main() {
    return assignment08();
}

int assignment08(void) {
    int prices[SIZE];          // ���� ���� �迭
    int discounted[SIZE];      // ���ε� ���� �迭
    int rate;                  // ������ (����, % ����)

    // ��ǰ ���� �Է�
    printf("��ǰ�� %d���� �Է��ϼ���:\n", SIZE);
    inputPrices(prices, SIZE);

    // ������ �Է�
    printf("������(%)? ");
    scanf("%d", &rate);

    // ���ε� ���� ���
    calcDiscount(prices, discounted, SIZE, rate);

    // ��� ���
    printf("\n===== ��� =====\n");
    printResult(prices, discounted, SIZE);

    return 0;
}

/*
 * �Լ���: inputPrices()
 * ���: ��ǰ ���ݵ��� �Է¹޾� �迭�� �����Ѵ�.
 */
void inputPrices(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

/*
 * �Լ���: calcDiscount()
 * ���: ��ǰ ���� �迭�� �������� ���ε� ������ ����Ѵ�.
 */
void calcDiscount(int arr[], int discounted[], int size, int rate) {
    for (int i = 0; i < size; i++) {
        discounted[i] = arr[i] * (100 - rate) / 100;  // ���� ���
    }
}

/*
 * �Լ���: printResult()
 * ���: ���� ���ݰ� ���ε� ������ ������ ����Ѵ�.
 */
void printResult(int arr[], int discounted[], int size) {
    for (int i = 0; i < size; i++) {
        printf("����: %d    -->    ���ΰ�: %d\n", arr[i], discounted[i]);
    }
}
