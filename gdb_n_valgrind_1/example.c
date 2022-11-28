#include <stdio.h>
#include <malloc.h>

#define MAX(a, b) a > b ? a : b;

int test(int *a, int b) {

    *a = 5;
    b = 5;
}


int main(int argc, char *argv[]) {

    int num;
    do {
        printf("Enter a positive integer:");

        scanf("%d", &num);
    } while (num < 0);

    int factorial;
    for (int i = 1; i <= num; i++) {
        factorial = factorial * i;
    }

    printf("%d! = %d\n", num, factorial);

    for (int i = 0; i < 10; i++) {
        printf("%d\n", i);
    }

    int a = 1, b = 2;
    printf("%d %d\n", a, b);
    test(&a, b);
    printf("%d %d\n", a, b);

    int max = MAX(2, 1 + 2) + 1;
    printf("max(2, 1 + 2) + 1 = %d\n", max); // 4?

    int *arr = (int *)malloc(5*sizeof(int));

    arr[5] = 123;
    printf("%d\n", arr[5]);

    arr = (int *)malloc(10*sizeof(int));

    arr[6] = 0;
    printf("%d\n", arr[6]);

    return 0;
}