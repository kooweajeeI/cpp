// 메모리 동적할당

# include <iostream>
using namespace std;

int main() {
	int* arr;
	char size;

	printf("배열방의 개수: ");
	scanf_s("%d", &size);
	arr = (int*)malloc(sizeof(int));

	printf("만들어진 배열 크기 : %d\n", sizeof(int) * size);
	printf("%d\n", sizeof(int));

	free(arr);		// 메모리 해제
	return 0;
}