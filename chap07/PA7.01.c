/* ���ϸ�: PA7.01.c

  * ����: ���������� ���� �׿� �׻� ������ ��(����)�� ���Ͽ� ������ �����̴�.
		  ũ�Ⱑ 10�� ������ �迭�� ���Ͽ� ���������� ���� ä����� �Ѵ�. ù ��° ����
		  ���� ����(common difference)�� �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

  * �ۼ���: ������

  * ��¥: 2025.09.16.

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment01(void);
void printArray(int arr[], int size);
void fillCD(int arr[], int size, int start, int diff);

int main()
{

	return assignment01();
}

#define ARR_SIZE 10

int assignment01(void)
{
	int result[10] = { 0 };

	int start = 0;
	int diff = 0;

	//�Է�
	printf("�ʱⰪ ���� �Է��ϼ���: ");
	scanf("%d %d", &start, &diff);
	//���
	fillCD(result, 10, start, diff);
	//���
	printArray(result, 10);

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
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

/*
  * �Լ���: fillCD()
  * ���: ù �װ� ������ �̿��Ͽ� ���������� �迭�� ä���.
  * �Ű�����: int arr[] - ������ ������ �迭
			 int size - �迭 ũ��
			 int start - ���������� ù ��
			 int diff - ����
  * ��ȯ��: ����
*/
void fillCD(int arr[], int size, int start, int diff)
{
	int i;

	arr[0] = start;

	for (i = 1; i < size; i++)
	{
		arr[i] = arr[i - 1] + diff;
	}

}