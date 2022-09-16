#include <stdio.h>

void HanoiTowerMove(int num, char from, char by, char to) {
	if (num == 1) {
		printf("원반1을 %c에서 %c로 이동\n", from, to); // 원반이 1개 남았을 때 from에서 to로 이동
	}
	else {
		HanoiTowerMove(num - 1, from, to,by); // n-1개의 원반을 from에서 by로 이동 
		printf("원반 %d를 %c에서 %c로 이동\n", num, from, to); // 마지막 원반을 from에서 to로 이동
		HanoiTowerMove(num - 1, by, from, to); // n-1개의 원반을 by에서 to로 이동
	}
}
int main() {
	HanoiTowerMove(3, 'A', 'B', 'C');
	return 0; 
}