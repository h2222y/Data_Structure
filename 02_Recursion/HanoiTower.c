#include <stdio.h>

void HanoiTowerMove(int num, char from, char by, char to) {
	if (num == 1) {
		printf("����1�� %c���� %c�� �̵�\n", from, to); // ������ 1�� ������ �� from���� to�� �̵�
	}
	else {
		HanoiTowerMove(num - 1, from, to,by); // n-1���� ������ from���� by�� �̵� 
		printf("���� %d�� %c���� %c�� �̵�\n", num, from, to); // ������ ������ from���� to�� �̵�
		HanoiTowerMove(num - 1, by, from, to); // n-1���� ������ by���� to�� �̵�
	}
}
int main() {
	HanoiTowerMove(3, 'A', 'B', 'C');
	return 0; 
}