#include <stdio.h>

int BSearchRecur(int arr[], int first,int last, int target) {
	int mid;
	if (first > last)
		return -1;
	mid = (first + last)/2;
	if (arr[mid] == target)
		return mid;
	else if (arr[mid] < target)
		BSearchRecur(arr, mid+1, last, target);
	else
		BSearchRecur(arr, first, last-1, target);
}
int main() {
	int arr[] = { 1,3,5,7,9 };
	int idx;
	idx = BSearchRecur(arr,0, sizeof(arr) / sizeof(int)-1, 7);
	if (idx == -1)
		printf("Ž�� ���� \n");
	else
		printf("Ÿ�� ���� �ε��� : %d\n", idx);
	idx = BSearchRecur(arr, 0, sizeof(arr) / sizeof(int) - 1, 4);
	if (idx == -1)
		printf("Ž�� ���� \n");
	else
		printf("Ÿ�� ���� �ε��� : %d\n", idx);
	return 0;
}