/* ���ϸ�: PA7.16.c
  * ����: ������ �迭�� Ű ���� �Ű������� ���޹޾� �迭���� Ű ���� ã�� �ε����� �����ϴ�
          find_array �Լ��� �ۼ��Ͻÿ�. Ű ���� ã�� �� ������ -1�� �����Ѵ�.
  * �ۼ���: ������
  * ��¥: 2025.09.17.
  * ����: v1.1
*/

#include <stdio.h>

int assignment16(void);
int find_array(int arr[], int size, int key);
void printArray(int arr[], int size);  // �迭 ��� �Լ�

int main() {
    return assignment16();
}

int assignment16(void) {
    int arr[] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int key, index;

    printf("�迭: ");
    printArray(arr, size);  // �迭 ���� ���

    printf("ã�� ��? ");
    scanf("%d", &key);

    index = find_array(arr, size, key);

    if (index != -1) {
        printf("%d�� %d��° �����Դϴ�.\n", key, index);
    }
    else {
        printf("Ű %d�� �迭���� ã�� �� �����ϴ�.\n", key);
    }

    return 0;
}

/*
 * �Լ���: find_array()
 * ���: ������ �迭���� Ű ���� ã�� �ε����� ����
 * �Ű�����: int arr[] - �˻��� �迭, int size - �迭 ũ��, int key - ã�� ��
 * ��ȯ��: Ű ���� �ε���, ������ -1
 */
int find_array(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1; // Ű�� ã�� ������ ���
}

/*
 * �Լ���: printArray()
 * ���: �迭�� ���ҵ��� �������� ������ ���
 * �Ű�����: int arr[] - ����� �迭, int size - �迭 ũ��
 * ��ȯ��: ����
 */
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
