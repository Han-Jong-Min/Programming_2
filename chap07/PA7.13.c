/* ���ϸ�: PA7.13.c

  * ����: ��Ʈ OR �����ڸ� �̿��ϸ� �� �̹����� ��ĥ �� �ִ�. ũ�Ⱑ ���� 2���� unsigned char �迭��
         ��Ʈ OR ������ ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. unsigned char �迭 2���� ũ�Ⱑ 16��
         �迭�� �����ϰ� ������ ������(0~255)�� ä���, ��Ʈ OR ���� ����� ������ �迭�� ���� �����ؼ�
         ����Ͻÿ�.

  * �ۼ���: ������

  * ��¥: 2025.09.17.

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 16

int assignment13(void);
void fillArray(unsigned char arr[], int size);
void bitwiseOr(unsigned char arr1[], unsigned char arr2[], unsigned char result[], int size);
void printArray(const char* label, unsigned char arr[], int size);

int main() {
    return assignment13();
}

int assignment13(void) {
    unsigned char arr1[SIZE], arr2[SIZE], result[SIZE];

    srand(time(NULL)); // ���� �õ� ����

    fillArray(arr1, SIZE);
    fillArray(arr2, SIZE);
    bitwiseOr(arr1, arr2, result, SIZE);

    printArray("image1", arr1, SIZE);
    printArray("image2", arr2, SIZE);
    printArray("result", result, SIZE);

    return 0;
}

/*
 * �Լ���: fillArray()
 * ���: �迭�� 0~255 ������ ���� �� ä��
 * �Ű�����: unsigned char arr[] - ��� �迭, int size - �迭 ũ��
 * ��ȯ��: ����
 */
void fillArray(unsigned char arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 256;
    }
}

/*
 * �Լ���: bitwiseOr()
 * ���: �� �迭�� ���� ��ġ ���Ҹ� ��Ʈ OR ����
 * �Ű�����: unsigned char arr1[], arr2[], result[] - ��� �迭��, int size - �迭 ũ��
 * ��ȯ��: ����
 */

void bitwiseOr(unsigned char arr1[], unsigned char arr2[], unsigned char result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] | arr2[i];
    }
}

/*
 * �Լ���: printArray()
 * ���: �迭 ���� 16����(�빮��)�� ���
 * �Ű�����: const char *label - �迭 �̸�, unsigned char arr[] - ����� �迭, int size - �迭 ũ��
 * ��ȯ��: ����
 */
void printArray(const char* label, unsigned char arr[], int size) {
    printf("%s: ", label);
    for (int i = 0; i < size; i++) {
        printf("%02X ", arr[i]);
    }
    printf("\n");
}
