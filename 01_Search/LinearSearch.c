#include <stdio.h>

int LSearch(int arr[], int len, int target) {
	int i;
	for (i = 0; i < len; i++) {
		if (arr[i] == target) { // 만약 해당 값이 찾고자 하는 값과 일치한다면
			return i; // 인덱스 반환
		}
	}
	return -1; // 찾지 못했을 경우 -1 반환
}

int main() {
	int arr[] = { 3,5,2,4,9 };
	int idx;
	idx = LSearch(arr, sizeof(arr) / sizeof(int), 4);
	if (idx == -1) {
		printf("탐색 실패\n");
	}
	else printf("타겟 저장 인덱스 : %d\n", idx);
	idx = LSearch(arr, sizeof(arr) / sizeof(int), 7);
	if (idx == -1) {
		printf("탐색 실패\n");
	}
	else printf("타겟 저장 인덱스 : %d\n", idx);
	
	return 0; 
}