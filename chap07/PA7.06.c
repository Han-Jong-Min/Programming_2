/* ���ϸ�: PA7.06.c

  * ����: ũ�Ⱑ 10�� �Ǽ��� �迭�� ���ؼ� ���ҵ��� �������� ����� ���α׷��� �ۼ��Ͻÿ�.
          �Ǽ��� �迭�� �ʱⰪ�� ������� ���Ͻÿ�.

  * �ۼ���: ������

  * ��¥: 2025.09.16.

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment06(void);
void printArray(double arr[], int size);
void reverseArray(double arr[], int size);

int main()
{
    return assignment06();
}

#define ARR_SIZE 10

int assignment06(void)
{
    // �ʱⰪ�� ���Ƿ� ����
    double data[ARR_SIZE] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };

    printf("�迭: ");
    printArray(data, ARR_SIZE);

    reverseArray(data, ARR_SIZE);

    printf("����: ");
    printArray(data, ARR_SIZE);

    return 0;
}

/*
  * �Լ���: printArray()
  * ���: �迭�� �Ǽ� ���� ����Ѵ�.
  * �Ű�����: double arr[] - ����� �迭, int size - �迭 ũ��
  * ��ȯ��: ����
*/
void printArray(double arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%.1f ", arr[i]);
    }
    printf("\n");
}

/*
  * �Լ���: reverseArray()
  * ���: �迭�� ���ҵ��� �������� �ٲ۴�.
  * �Ű�����: double arr[] - ��� �迭, int size - �迭 ũ��
  * ��ȯ��: ����
*/
void reverseArray(double arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        double temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}