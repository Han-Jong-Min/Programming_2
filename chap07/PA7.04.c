/* ���ϸ�: PA7.04.c

  * ����: Ư�� ������ �ʱ�ȭ�� ������ �迭�� ���Ͽ� �迭�� ���� �� �ִ��� ���� ���ҿ�
          �ּڰ��� ���� ���Ҹ� ã�Ƽ� �ε����� ���� �Բ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
          �迭�� �ʱⰪ�� ������� ���Ͻÿ�.

  * �ۼ���: ������

  * ��¥: 2025.09.16.

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment04(void);
void printArray(int arr[], int size);
void findMinMax(int arr[], int size, int* minIndex, int* maxIndex);

int main()
{
    return assignment04();
}

#define ARR_SIZE 10

int assignment04(void)
{
    // �迭 �ʱ�ȭ (���ϴ� ������)
    int data[ARR_SIZE] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };

    int minIdx = 0;
    int maxIdx = 0;

    // �迭 ���
    printArray(data, ARR_SIZE);

    // �ּڰ��� �ִ� �ε��� ã��
    findMinMax(data, ARR_SIZE, &minIdx, &maxIdx);

    // ��� ���
    printf("�ִ�: �ε��� = %d, �� = %d\n", maxIdx, data[maxIdx]);
    printf("�ּڰ�: �ε��� = %d, �� = %d\n", minIdx, data[minIdx]);

    return 0;
}

/*
  * �Լ���: printArray()
  * ���: �־��� �迭�� ��Ҹ� ����Ѵ�.
  * �Ű�����: int arr[] - ����� �迭, int size - �迭 ũ��
  * ��ȯ��: ����
*/
void printArray(int arr[], int size)
{
    printf("�迭: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/*
  * �Լ���: findMinMax()
  * ���: �迭 �� �ּڰ��� �ִ��� ã�� �� �ε����� ��ȯ�Ѵ�.
  * �Ű�����:
  *    int arr[] - ��� �迭
  *    int size - �迭 ũ��
  *    int* minIndex - �ּڰ��� �ε����� ������ ������
  *    int* maxIndex - �ִ��� �ε����� ������ ������
  * ��ȯ��: ����
*/
void findMinMax(int arr[], int size, int* minIndex, int* maxIndex)
{
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[*minIndex])
            *minIndex = i;
        if (arr[i] > arr[*maxIndex])
            *maxIndex = i;
    }
}