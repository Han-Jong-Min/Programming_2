#include <stdio.h>

int main() {
	printf("Hello, World!\n");

	return 0;
}

void test1() {
	int age = 12;
	const double PI = 3.1415921;
	char myname[] = "������";
	int iarray[] = { 1, 2, 3, 4 };

	age = age + 1;

	double r = 2; // ������ 2m
	double area = PI * r * r; // ������ r�� ���� ����

	if ((age > 10) || (area > 5.0)) {

	}
	else {

	}

	for (int i = 0; i < 5; i++) {
		printf("%d\n", i);
	}
}

