#include <stdio.h>

#define N 2
int main() {

	int j = 0;

	printf("j = %d\n", j);
// CTRL+C - завершить программу
	int i = 0;
	for (i = 0; i < N; i++) {
		printf("i = %d\n", i);
		if (i == 1) continue; printf(">>>"); // break; continue;
	}

	int k = 5;
	while (k < 5) {
		printf("k = %d\n", k);
		k++;
	}

	k = 0;
	do {
		printf("i = %d\n", k++);
	} while (k < 5);


	return 0;

}
