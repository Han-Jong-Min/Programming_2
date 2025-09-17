/* ���ϸ�: PA7.12.c

  * ����: ����ǥ ���� ���α׷��� �ۼ��Ϸ��� �Ѵ�. ������ ������ ���� �¼��� ���
          10����� ����. ������ �¼����� �Է¹޾� �� �ڸ��� �Ҵ��Ѵ�. ������ ������ �� �¼��� ���¸� ����Ѵ�.
          O�̸� ���� ����, X�� ���� �Ұ��� �ǹ��Ѵ�. �� �̻� ������ �� ������ ���α׷��� �����Ѵ�.

  * �ۼ���: ������

  * ��¥: 2025.09.17.

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment12(void);
void printSeats(char seats[], int size);
int reserveSeats(char seats[], int size, int count, int reservedIndex[]);
int countAvailable(char seats[], int size);

int main()
{
    return assignment12();
}

#define SEAT_COUNT 10

int assignment12(void)
{
    char seats[SEAT_COUNT] = { 'O','O','O','O','O','O','O','O','O','O' };
    int num;

    while (1)
    {
        // ���� �¼� ���� ���
        printSeats(seats, SEAT_COUNT);

        // ���� �¼��� ������ ����
        if (countAvailable(seats, SEAT_COUNT) == 0)
        {
            printf("�� �̻� ������ �� �����ϴ�. ���α׷��� �����մϴ�.\n");
            break;
        }

        printf("������ �¼� ��? ");
        scanf("%d", &num);

        if (num <= 0)
        {
            printf("�߸��� �Է��Դϴ�. 1 �̻��� ���ڸ� �Է��ϼ���.\n");
            continue;
        }

        int reservedIndex[SEAT_COUNT] = { 0 };  // ���ŵ� �¼� ��ȣ ����
        if (reserveSeats(seats, SEAT_COUNT, num, reservedIndex))
        {
            printf("���� �¼��� ���ŵǾ����ϴ�: ");
            for (int i = 0; i < num; i++)
            {
                printf("%d ", reservedIndex[i] + 1); // �¼� ��ȣ�� 1���� ���
            }
            printf("\n");
        }
        else
        {
            printf("�¼��� �����Ͽ� %d���� ������ �� �����ϴ�.\n", num);
        }
    }

    return 0;
}

/*
  * �Լ���: printSeats()
  * ���: �¼� ���¸� ����Ѵ�.
  * �Ű�����: char seats[] - �¼� �迭, int size - �¼� ����
  * ��ȯ��: ����
*/
void printSeats(char seats[], int size)
{
    printf("���� �¼�: ");
    for (int i = 0; i < size; i++)
    {
        printf("%c ", seats[i]);
    }
    printf("\n");
}

/*
  * �Լ���: reserveSeats()
  * ���: �¼��� �����ϰ� ���ŵ� �¼� �ε����� reservedIndex[]�� ����
  * �Ű�����:
  *   - seats[]: �¼� �迭
  *   - size: �¼� ����
  *   - count: ������ �¼� ��
  *   - reservedIndex[]: ���ŵ� �¼� ��ȣ ����� �迭
  * ��ȯ��: ���� �� 1, ���� �� 0
*/
int reserveSeats(char seats[], int size, int count, int reservedIndex[])
{
    int reserved = 0;

    for (int i = 0; i < size && reserved < count; i++)
    {
        if (seats[i] == 'O')
        {
            seats[i] = 'X';
            reservedIndex[reserved] = i;
            reserved++;
        }
    }

    return (reserved == count) ? 1 : 0;
}

/*
  * �Լ���: countAvailable()
  * ���: ���� ������ �¼� ���� ����.
  * ��ȯ��: ���� ������ �¼� ��
*/
int countAvailable(char seats[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (seats[i] == 'O')
            count++;
    }
    return count;
}