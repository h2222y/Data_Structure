#include <stdio.h>

int Fibo(int num) {
	if (num == 1)
		return 0;
	if (num == 2)
		return 1;
	else return Fibo(num - 2) + Fibo(num - 1);
}
int main() {
	for (int i = 1; i < 15; i++) {
		printf("%d ", Fibo(i));
	}
	return 0;
}