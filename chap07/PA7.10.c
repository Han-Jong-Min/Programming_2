/* ���ϸ�: PA7.10.c

  * ����: 3X3 ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ��ķ� ���� 2���� �迭��
         ������� �ʱ�ȭ�ص� �ȴ�.
  * �ۼ���: ������

  * ��¥: 2025.09.17.

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment10(void);
void printMatrix(int matrix[3][3]);
void addMatrix(int x[3][3], int y[3][3], int result[3][3]);

int main()
{
    return assignment10();
}

int assignment10(void)
{
    // �� ��� �ʱ�ȭ
    int x[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int y[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int sum[3][3] = { 0 };

    // ��� ���� ����
    addMatrix(x, y, sum);

    // ���
    printf("x ���:\n");
    printMatrix(x);

    printf("\ny ���:\n");
    printMatrix(y);

    printf("\nx+y ���:\n");
    printMatrix(sum);

    return 0;
}

/*
  * �Լ���: printMatrix()
  * ���: 3x3 ����� ���� ���� ����Ѵ�.
  * �Ű�����: int matrix[3][3] - ����� ���
  * ��ȯ��: ����
*/
void printMatrix(int matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}

/*
  * �Լ���: addMatrix()
  * ���: �� ����� ���� ����Ͽ� result�� �����Ѵ�.
  * �Ű�����:
  *    int x[3][3] - ù ��° ���
  *    int y[3][3] - �� ��° ���
  *    int result[3][3] - ��� ��� �����
  * ��ȯ��: ����
*/
void addMatrix(int x[3][3], int y[3][3], int result[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = x[i][j] + y[i][j];
        }
    }
}