/* ���ϸ�: PA7.18.c

  * ����: ���п��� ������ �������հ� �ٸ��� ������ �ߺ��� ������� �ʴ´�. �ִ� 10����
          ������ ���Ҹ� ������ �� �ִ� ���������� ���α׷��Ͻÿ�. ������ �Է¹޾� ������ 
          ���Ҹ� �߰��ϰ�, �� ������ ������ ���ҵ��� ����Ͻÿ�.

  * �ۼ���: ������

  * ��¥: 2025.09.17.

  * ����: v1.0

  */

#include <stdio.h>

#define MAX_SIZE 10

int assignment18(void);
int findElement(int arr[], int size, int element);
void printArray(int arr[], int size);

int main() {
    return assignment18();
}

int assignment18(void) {
    int arr[MAX_SIZE];
    int size = 0;  // ���� ���� ����
    int element;

    printf("������ ���� ���α׷� (�ִ� %d��)\n", MAX_SIZE);
    printf("�����Ϸ��� -1 �Է�\n\n");

    while (size < MAX_SIZE) {
        printf("�迭�� �߰��� ����? ");
        scanf("%d", &element);

        if (element == -1) break; // ����

        int idx = findElement(arr, size, element);
        if (idx != -1) {
            printf("�ش� ���Ұ� �̹� [%d]�� �����մϴ�.\n", idx);
        }
        else {
            arr[size++] = element;
        }

        printArray(arr, size);
        printf("\n");
    }

    printf("���� �迭: ");
    printArray(arr, size);
    printf("\n");

    return 0;
}

/*
 * �Լ���: findElement()
 * ���: �迭���� ���� �˻�, ������ �ε��� ��ȯ, ������ -1
 */
int findElement(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) return i;
    }
    return -1;
}

/*
 * �Լ���: printArray()
 * ���: �迭�� ���� ���� ���
 */
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
